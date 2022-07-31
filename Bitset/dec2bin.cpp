#include <bits/stdc++.h>
using namespace std;





void dec2binArr(){
    int n;
    cin>>n;
    vector<int>v;
    if(n==0)v.push_back(0);
    
    while(n!=0){
        v.push_back(n%2);
        n/=2;
    }

    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i;
    }
    cout<<endl;
    return;
}

void dec2binNum(){
    int n;
    cin>>n;
    int bin=0;
    int rem,i=1;
    while(n!=0){
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i*=10;
    }

    cout<<bin<<endl;
    return;
}

int main(){

    dec2binArr();
    dec2binNum();

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