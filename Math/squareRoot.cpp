#include <bits/stdc++.h>
using namespace std;

/*
O(logN)
*/
long long squareRoot(long long n){
    long long root=-1;
    long long i=0,j=n;
    while(i<=j){
        long long m=i+(j-i)/2;
        long long sqr=m*m;
        if(sqr==n){
            return m;
        }
        else if(sqr<n){
            root=m;
            i=m+1;
        }
        else{
            j=m-1;
        }
    }

    return root;
}
int solve(){

    long long n;
    cin>>n;

    cout<<squareRoot(n)<<endl;



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