#include<iostream>
#include "queue"
#include<algorithm>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    cin>>N;

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<N; i++){
        int tmp;
        cin>>tmp;
        pq.push(tmp);
    }

    for(int i=0; i<N; i++){
        cout<<pq.top()<<'\n';
        pq.pop();
    }

    return 0;
}