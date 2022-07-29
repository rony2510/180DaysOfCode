#include <bits/stdc++.h>
using namespace std;


/*
ans=x/y[y!=0]
*/
int solve(){

    int x,y;
    cin>>x>>y;
    cout<<x/y<<endl;
    cout<<(float)x/(y*1.0)<<endl;

    float l,m;
    cin>>l>>m;
    cout<<l/m<<endl;



	return 0;
}
int main(){
    int test;
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