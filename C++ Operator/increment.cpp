#include <bits/stdc++.h>
using namespace std;

/*
pre-increment
post-increment
*/

int solve(){

    int x;
    cin>>x;
    cout<<x<<endl;
    ++x;//pre increment
    cout<<x<<endl;
    x++;//post increment
    cout<<x<<endl;
    cout<<++x<<endl;//incremented & then printed
    cout<<x<<endl;
    cout<<x++<<endl;//printed & then incremented
    cout<<x<<endl;


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