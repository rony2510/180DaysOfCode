#include <bits/stdc++.h>
using namespace std;


/*
pre-decrement
post-decrement
*/
int solve(){

    int x;
    cin>>x;
    cout<<x<<endl;
    --x;//pre decrement
    cout<<x<<endl;
    x--;//post decrement
    cout<<x<<endl;
    cout<<--x<<endl;//decremented then printed
    cout<<x<<endl;
    cout<<x--<<endl;//printed then decremented
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