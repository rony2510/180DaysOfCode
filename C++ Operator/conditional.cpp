#include <bits/stdc++.h>
using namespace std;



int solve(){

    int x,y;
    cin>>x>>y;
    (x>y)?cout<<"x>y"<<endl:cout<<"x<=y"<<endl;

    int p=(x>y)?100:200;
    cout<<p<<endl;
    
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