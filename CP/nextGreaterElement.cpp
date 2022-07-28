#include <bits/stdc++.h>
using namespace std;
/*
5
5
1 2 3 4 5
2 3 4 5 -1 
5
5 4 3 2 1
-1 -1 -1 -1 -1
5
2 2 2 2 2
-1 -1 -1 -1 -1
5
1 5 2 4 3
5 -1 4 -1 -1
3
1 2 3
2 3 -1
*/
vector<int> nextGreaterElement(int a[],int n){

    vector<int>ans;
    ans.push_back(-1);
    stack<int>s;

    s.push(a[n-1]);
    for(int i=n-2;i>=0;--i){
        int det=0;
        while(!s.empty()){
            if(s.top()>a[i]){
                ans.push_back(s.top());
                det=1;
                break;
            }
            else{
                s.pop();
            }
        }
        if(det==0){
            ans.push_back(-1);
        }
        s.push(a[i]);
    }

    reverse(ans.begin(),ans.end());

    return ans;
}
int solve(){

    int n;
    cin>>n;

    int a[n+100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }


    vector<int>res=nextGreaterElement(a,n);

    
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