#include<iostream>
#include<vector>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M,s=0,e=1,total=0,cnt=0;
    vector<int> v;

    cin>>N>>M;
    for(int i=0; i<N; i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }

    while(1){
        if(v.size()==1)break;

        total+=v.at(s);
        total+=v.at(e);

        if(total!=M){
            e++;
            if(e==v.size()){
                v.erase(v.begin()+s);
                e=1;
            }
            total=0;
        }
        else{
            cnt++;
            v.erase(v.begin()+e);
            v.erase(v.begin());
            if(v.size()==0)break;
            e=1;
            total=0;
        }
    }

    cout<<cnt;
    return 0;
}