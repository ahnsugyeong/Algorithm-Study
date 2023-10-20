#include<iostream>
#include<vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    vector<int> v;
    cin>>N>>M;



    for(int k=0; k<N; k++){
        int tmp;
        cin>>tmp;

        v.push_back(tmp);
        if(k!=0){
            v.at(k)+=v.at(k-1);
        }
    }
    for(int k=0; k<M; k++){
        int i, j;
        cin>>i>>j;
        if(i!=1)
            cout<<v.at(j-1)-v.at(i-2)<<'\n';
        else
            cout<<v.at(j-1)<<'\n';
    }

}