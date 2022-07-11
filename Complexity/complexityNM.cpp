#include <bits/stdc++.h>
using namespace std;
/*
O(n*m)
*/
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cout<<i*j<<" ";
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