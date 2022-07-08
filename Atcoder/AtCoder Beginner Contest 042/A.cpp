/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 1
**/


/*
https://atcoder.jp/contests/abc042/tasks/abc042_a
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){

   int f=0,s=0;
   for(int i=1;i<=3;++i){
      int x;cin>>x;
      if(x==5)++f;
      if(x==7)++s;
   }
   (f==2 && s==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  
}
int main(){
   solve();
   return 0;
}