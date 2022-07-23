#include <bits/stdc++.h>
using namespace std;

/*
10
b b a c c d e f f d
a 1
b 2
c 2
d 2
e 1
f 2
*/
int solve(){

    int n;
    cin>>n;
    map<string,int>m;

    

    while(n--){
        string s;
        cin>>s;
        ++m[s];
    }

    for(auto i:m){
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