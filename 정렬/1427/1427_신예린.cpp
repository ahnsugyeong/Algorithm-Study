#include<iostream>
#include "vector"
#include<algorithm>
using namespace  std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin>>N;

    sort(N.begin(), N.end(), greater<char>());
    cout<<N<<'\n';




    return 0;
}
