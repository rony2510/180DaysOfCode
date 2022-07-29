#include <bits/stdc++.h>
using namespace std;



int solve(){

    int x,y;
    cin>>x>>y;

    if(x>y && y>5){
        cout<<"x>y && y>5"<<endl;
    }
    else{
        cout<<"ooops!"<<endl;
    }

    if(x==10 || x>y){
        cout<<"x==10 || x>y"<<endl;
    }
    else{
        cout<<"ooops!"<<endl;
    }

    int p=1;
    if(!p){
        cout<<"i"<<endl;
    }
    else{
        cout<<"ooops!"<<endl;
    }
    p=0;
    if(!p){
        cout<<"i"<<endl;
    }
    else{
        cout<<"ooops!"<<endl;
    }

    bool bo=false;
    if(!bo){
        cout<<"True"<<endl;
    }
    bo=true;
    if(!bo){
        cout<<"False"<<endl;
    }




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