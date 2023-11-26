#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    vector <int> v(N);

    for(int i=0; i<N; i++){
        cin>>v[i];
    }

    stack <int> s;
    vector<int>NGE(N);
    for(int i=N-1; i>=0; i--){
        while(!s.empty()&&s.top()<=v.at(i)){
            s.pop();
        }
        if(s.empty()){
            NGE[i]=-1;
        }
        else{
            NGE[i]=s.top();
        }
        s.push(v.at(i));
    }

    for(int i=0; i<N; i++){
        cout<<NGE[i]<<" ";
    }
    return 0;
}
