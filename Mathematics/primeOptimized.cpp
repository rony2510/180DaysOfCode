#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){

    int n;
    cin>>n;
    (isPrime(n))?cout<<"Prime"<<endl:cout<<"Not Prime"<<endl;
    
    
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