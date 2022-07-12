#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;cin>>n;vector<int>v;vector<int>::iterator it;
    for(int i=0;i<n;++i){int x;cin>>x;v.push_back(x);}
    for(int i=1;i<=4*6;++i){
        for(it=v.begin();it!=v.end();++it){cout<<*it<<" ";}
        cout<<endl;
        next_permutation(v.begin(),v.end());
        // prev_permutation(v.begin(),v.end());
    }
    return 0;
}