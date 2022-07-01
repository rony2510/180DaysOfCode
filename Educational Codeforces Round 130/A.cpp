/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 1
**/


/*
https://codeforces.com/contest/1697/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,m;
   cin>>n>>m;
   int en;
   int ans=0;
   for(int i=1;i<=n;++i){
      cin>>en;
      if(m>=en){
         m-=en;
      }
      else{
         ans+=en-m;
         m=0;
      }
   }

   cout<<ans<<endl;
   
  
}
int main(){
   int t;cin>>t;
   while(t--)
   solve();
   return 0;
}