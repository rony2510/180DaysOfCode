#include <bits/stdc++.h>
using namespace std;

/*
10
a a b c d b c a d c
a 1
a 2
b 1
c 1
d 1
b 2
c 2
a 3
d 2
c 3
*/
int solve(){

    int n;
    cin>>n;
    vector<pair<string,int>>v;
    map<string,int>m;

    while(n--){
        string s;
        cin>>s;
        v.push_back(make_pair(s,++m[s]));
    }

    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }


	return 0;
}
int main(){

    int test=1;
    cin>>test;
    while(test--){
        solve();
    }

    return 0;
}