#include <bits/stdc++.h>
using namespace std;

/*
5
0 0
1
0 5
6
1 0
2
1 2
4
2 1
5
*/
int ackerMann(int m,int n){
    if(m==0){
        return n+1;
    }
    else if(n==0 && m>0){
        return ackerMann(m-1,1);
    }
    else if(m>0 && n>0){
        return ackerMann(m-1,ackerMann(m,n-1));
    }
}

int solve(){

    int n,m;
    cin>>m>>n;

    cout<<ackerMann(m,n)<<endl;


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