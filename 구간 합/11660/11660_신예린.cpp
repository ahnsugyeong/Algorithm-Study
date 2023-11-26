#include<iostream>
#include<vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin>>N>>M;
    vector<vector<int>> v(N, vector<int>(N+1));
    for(int i=0; i<N; i++){
        v[i][0]=0;
        for(int j=1; j<=N; j++){
            int tmp;
            cin>>tmp;
            v[i][j]=v[i][j-1]+tmp;
        }
    }

    for(int i=0; i<M; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int result=0;
        for(int j=a-1; j<c; j++){
            result+=v[j][d]-v[j][b-1];
        }
        cout<<result<<'\n';
    }

}

