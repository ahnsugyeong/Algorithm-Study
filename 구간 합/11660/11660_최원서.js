const fs = require("fs");

const input = fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map((el) => el.split(" ").map(Number)); //줄바꿈 처리 추가

const N = input[0][0];
const M = input[0][1];

const data = [];
const coordinate = [];
for (i = 0; i < N; i++) {
  data[i] = input[i + 1];
}
for (i = 0; i < M; i++) {
  coordinate[i] = input[N + i + 1];
}
const output = [];
function solution(N, M, data, coordinate) {
  for (i = 0; i < M; i++) {
    let sum = 0;
    let x1 = coordinate[i][0];
    const X1 = x1 - 1;
    let y1 = coordinate[i][1];
    let x2 = coordinate[i][2];
    let y2 = coordinate[i][3];
    x1--;
    y1--;
    x2--;
    y2--;
    const time = (x2 - x1 + 1) * (y2 - y1 + 1);

    for (j = 0; j < time; j++) {
      sum += data[x1][y1];
      x1 += 1;
      if (x1 > y2) {
        x1 = X1;
        y1 += 1;
      }
    }
    output.push(sum);
    sum = 0;
  }
  output.map((index) => {
    console.log(index);
  });
}

solution(N, M, data, coordinate);
