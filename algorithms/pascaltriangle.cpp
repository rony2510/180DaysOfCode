#include <bits/stdc++.h>
using namespace std;

/*
O(n^2)
*/

int pascal(int n){
    int c;
    for(int line=1;line<=n;++line){
        c=1;
        for(int i=1;i<=line;++i){
            cout<<c<<" ";
            c=c*(line-i)/i;
        }
        cout<<endl;
    }
    
}
int main(){

    int n;
    cin>>n;
    pascal(n);

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