#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n+100];
    iota(a,a+n,0);

    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    iota(a,a+n,5);

    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    
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