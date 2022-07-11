#include <bits/stdc++.h>
using namespace std;
/* 
O(n)
*/
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;++i){
        cout<<i<<" ";
    }
    cout<<"\n";

    for(int i=1;i*i<=n;++i){
        cout<<i<<" ";
    }
    cout<<"\n";
    

    return 0;
}