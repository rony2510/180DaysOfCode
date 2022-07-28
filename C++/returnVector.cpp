#include <bits/stdc++.h>
using namespace std;

vector<int> returnVector(int a[],int n){

    vector<int>v;
    int sum=0;
    for(int i=0;i<n;++i){
        v.push_back(sum+a[i]);
        sum+=a[i];
    }

    return v;
}
int solve(){

    int n;
    cin>>n;

    int a[n+100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }


    vector<int>res=returnVector(a,n);

    
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl;



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