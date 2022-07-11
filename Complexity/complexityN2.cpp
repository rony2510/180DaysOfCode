#include <bits/stdc++.h>
using namespace std;
/*
O(n*n)
*/
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cout<<i*j<<" ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;++j){
            cout<<(i+j)<<" ";
        }
        cout<<"\n";
    }

    //2 phases
    for(int i=1;i<=n;++i){
        cout<<i*i<<" ";
    }
    cout<<"\n";
    return 0;
}