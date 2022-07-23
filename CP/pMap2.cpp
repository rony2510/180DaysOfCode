#include <bits/stdc++.h>
using namespace std;

/*
2
6
1 1 1 2 2 3
3
2
1
0
0
0
5
5 5 1 5 4
1
0
0
1
3
*/
int solve(){

    int n;
    cin>>n;
    map<int,int>mp;

    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        ++mp[x];
    }

    for(int i=1;i<=n;++i){
       cout<<mp[i]<<endl;
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