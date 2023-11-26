#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    string str = "";
    vector<int> v;
    vector<int> s;
    for(int i=0; i<n; i++){
        int tmp; cin>>tmp;
        v.push_back(tmp);
    }
    int j=0;
    for(int i=1; i<=n; i++){
        s.push_back(i);
        str+="+";
        while(!s.empty()&&s.back()==v[j]){
            j++;
            s.pop_back();
            str+="-";
        }
    }

    if(!s.empty()){
        cout<<"NO\n";
    }
    else{
        for(char i : str){
            cout<<i<<'\n';
        }
    }
    return 0;
}
