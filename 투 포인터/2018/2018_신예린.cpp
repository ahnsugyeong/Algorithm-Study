#include<iostream>
#include<vector>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,total=0,cnt=0, start=0, end=0;
    cin>>N;
    while(1){
        if(end == N){
            cnt++;
            break;
        }

        if(total==N){
            cnt++;
            end++;
            total+=end;
        }
        else if(total>N){
            start++;
            total-=start;
        }
        else{
            end++;
            total+=end;
        }

    }
    cout<<cnt<<'\n';
    return 0;
}
