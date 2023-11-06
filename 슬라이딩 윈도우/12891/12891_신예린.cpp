#include<iostream>
#include<vector>

using namespace  std;
vector<int> num;

bool isSuccess(vector<int> v){
    for(int i=0; i<4; i++){
        if(num[i]!=0){
            if(num[i]<=v.at(i)){
                continue;
            }
            else return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int P,S,cnt=0;
    string dna;

    cin>>S>>P;
    cin>>dna;

    //A C G T
    for(int i=0; i<4; i++){
        int tmp; cin>>tmp;
        num.push_back(tmp);
    }
    vector<int> v={0,0,0,0};
    for(int i=0; i<P; i++){
        if(dna[i]=='A')v[0]++;
        else if(dna[i]=='C')v[1]++;
        else if(dna[i]=='G')v[2]++;
        else if(dna[i]=='T')v[3]++;
    }

    if(isSuccess(v)){
        cnt++;
    }
    for(int i = P; i<S; i++){
        if(dna[i-P]=='A')v[0]--;
        else if(dna[i-P]=='C')v[1]--;
        else if(dna[i-P]=='G')v[2]--;
        else if(dna[i-P]=='T')v[3]--;
        if(dna[i]=='A')v[0]++;
        else if(dna[i]=='C')v[1]++;
        else if(dna[i]=='G')v[2]++;
        else if(dna[i]=='T')v[3]++;
        if(isSuccess(v))cnt++;
    }
    cout<<cnt;
    return 0;
}
