#include <bits/stdc++.h>
using namespace std;
/*
O(n*n*n)
*/
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            for(int k=1;k<=n;++k){
                cout<<i*j*k<<" ";
            }
        }
    }
    cout<<"\n\n";

    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;++j){
            for(int k=j;k<=n;++k){
                cout<<i*j*k<<" ";
            }
        }
    }
    cout<<"\n";
    return 0;
}