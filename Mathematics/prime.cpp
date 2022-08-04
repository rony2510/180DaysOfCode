#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }

    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+1)==0){
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