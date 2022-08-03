#include <bits/stdc++.h>
using namespace std;

/*
A->a
a->A
*/
int smaller2capital(char c){
    cout<<char(c-32)<<endl;
    return 0;
}
int capital2smaller(char c){
    cout<<char(c+32)<<endl;
    return 0;
}
int main(){

    char c;
    cin>>c;

    if(c>='a' && c<='z'){
        smaller2capital(c);
    }
    else if(c>='A' && c<='Z'){
        capital2smaller(c);
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