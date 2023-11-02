#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, start, end, good=0;

    cin>>N;

    vector<int> v;

    for(int i=0; i<N; i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    for(int i=0;i<N; i++){
        int num = v.at(i);
        start = 0, end = N-1;
        if(start == i )start++;
        if(end == i)end--;
        while(start<end){
            if(num < v.at(start)+v.at(end)){
                end--;
            }
            else if(num>v.at(start)+v.at(end)){
                start++;
            }
            else{
                good++;
                break;
            }
            if(start == i )start++;
            if(end ==i)end--;
        }
    }
    cout<<good<<'\n';
    return 0;
}