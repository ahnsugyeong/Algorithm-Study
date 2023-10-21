const fs = require("fs");
// .readFileSync(
//     "/Users/cwonseo/Desktop/project/algorithm/Algorithm-Study/구간 합/11659/example.txt"
//   )
const input = fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map((el) => el.split(" ").map(Number)); //줄바꿈 처리 추가

const N = input[0][0];
const M = input[0][1];
const data = input[1];
const IJ = [];
const answer = [];
const cumsum = new Array(data.length + 1).fill(0);

data.forEach((v, i) => {
  cumsum[i + 1] = cumsum[i] + v;
});

for (i = 0; i < M; i++) {
  IJ[i] = input[i + 2];
}

function solution(N, M, data, IJ) {
  for (i = 0; i < M; i++) {
    I = IJ[i][0] - 1;
    J = IJ[i][1];
    answer.push(cumsum[J] - cumsum[I]);
  }
  console.log(answer.join("\n"));
}

solution(N, M, data, IJ);
