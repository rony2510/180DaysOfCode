#include <bits/stdc++.h>
using namespace std;



void bin2decArr(){
    int n;
    cin>>n;
    int bin[n];
    for(int i=1;i<=n;++i){
        cin>>bin[i];
    }
    int dec=0;
    for(int i=1;i<=n;++i){
        dec+=bin[i]*pow(2,n-i);
    }

    cout<<dec<<endl;

    return;
}

void bin2decNum(){
    int n;
    cin>>n;
    int dec=0,i=0;
    
    while(n!=0){
        int rem=n%10;
        dec+=rem*pow(2,i);
        ++i;
        n/=10;
    }

    cout<<dec<<endl;

    return;
}




int main(){

    bin2decArr();
    bin2decNum();

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