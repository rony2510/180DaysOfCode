#include <bits/stdc++.h>
using namespace std;

/*
5
3
c b a
c 1
b 1
a 1
6
b a a c b b
b 3
a 2
c 1
3
a b b
a 1
b 2
3
b b a
b 2
a 1
5
b b a b b
b 4
a 1
*/
int solve(){

    int n;
    cin>>n;
    map<string,int>m;
    vector<pair<string,int>>v;
    vector<string>vs;

    

    while(n--){
        string s;
        cin>>s;
        ++m[s];
        if(m[s]==1){
            vs.push_back(s);
        }
    }

    for(auto i:vs){
        v.push_back(make_pair(i,m[i]));
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













/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/