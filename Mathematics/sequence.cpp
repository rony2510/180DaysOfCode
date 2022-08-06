#include<bits/stdc++.h>
using namespace std;



/*
3 6 9 ? ? ? ? ? ................
in case of towards negative the exponential sequence won't work
*/
int main(){

    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;

    int d1=b-a;
    int d2=c-b;

    int r1,r2;
    r1=((b/a)*a==b)?b/a:0;
    r2=(b*r1==c)?c/b:0;


    v.push_back(a);
    v.push_back(b);
    v.push_back(c);


    if(d1==d2){
        int nextTerm=c;
        for(int i=1;i<=n;++i){
            nextTerm+=d1;
            v.push_back(nextTerm);
        }
    }
    else if(r1==r2 && r1!=0){
        int nextTerm=c;
        for(int i=0;i<=n;++i){
            nextTerm*=r1;
            v.push_back(nextTerm);
        }
    }
    else{
        return cout<<"Not Sequence"<<endl,0;
    }
    for(auto &i:v){
        cout<<i<<" ";
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