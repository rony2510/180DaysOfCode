#include <bits/stdc++.h>
using namespace std;

/*
==
>
<
>=
<=
!=
*/

int solve(){

    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"EQUAL"<<endl;
    }
    else if(x>y){
        cout<<"x GREATER y"<<endl;
    }
    else if(x<y){
        cout<<"y GREATER x"<<endl;
    }

    int p,q;
    cin>>p>>q;
    if(p>=q){
        cout<<"p => q"<<endl;
    }
    else if(p<=q){
        cout<<"p <= q"<<endl;
    }

    if(p!=q){
        cout<<"NOT EQUAL"<<endl;
    }

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