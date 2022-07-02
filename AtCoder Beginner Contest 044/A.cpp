/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
https://atcoder.jp/contests/abc044/tasks/abc044_a
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){

   long long n,k,p,q;
   cin>>n>>k>>p>>q;
   long long ans=p*min(k,n);
   n-=k;
   if(n>0){
      ans+=q*n;
   }
  
   cout<<ans<<endl;
  
}
int main(){
   solve();
   return 0;
}