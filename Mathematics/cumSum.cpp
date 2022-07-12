#include <bits/stdc++.h>
using namespace std;
/*
series:1+2+3+4+5
cumSum:1+3+6+10+15
*/
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=1;i<=n;++i){
        cin>>v[i];
    }

    int sum=0;
    vector<int>cumSum(n);
    for(int i=0;i<n;++i){
        sum+=v[i+1];
        cumSum[i]=sum;
    }

    for(auto i:cumSum){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}