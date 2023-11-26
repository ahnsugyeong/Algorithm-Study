#include<iostream>
#include "queue"
#include<algorithm>
using namespace  std;

struct cmp {
    bool operator()(int a, int b){
        if(abs(a)== abs(b)){
            return a>b; // 오름차순 (음수가 앞) a > b - 오름차순 / a < b - 내림차순
        }
        else{
            return abs(a)>abs(b);
        }
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    cin>>N;
    priority_queue<int, vector<int>, cmp> pq;

    for(int i=0; i<N; i++){
        int tmp;
        cin>>tmp;
        if(tmp==0){
            if(pq.empty())
                cout<<"0\n";
            else{
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        else{
            pq.push(tmp);
        }
    }

    return 0;
}
