#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    srand(time(0));//it ensures different random every time
    for(int i=1;i<=n;++i){
        cout<<rand()%15<<" ";
    }
    cout<<endl;
    /*
    lower<=num<=upper
    */
    int lower,upper;
    cin>>lower>>upper;
    for(int i=1;i<=n;++i){
        int num=(rand()%(upper-lower+1))+lower;
        cout<<num<<" ";
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