#include <bits/stdc++.h>
using namespace std;


void char2integer(){
    char c;
    cin>>c;
    int x=c-'0';
    cout<<x<<endl;
    return;
}

void string2integer(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
        cout<<s[i]-'0'<<endl;
    }
    return;
}
int main(){

    char2integer();
    string2integer();

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