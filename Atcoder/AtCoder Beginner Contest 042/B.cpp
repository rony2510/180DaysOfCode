/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 1
**/


/*
https://atcoder.jp/contests/abc042/tasks/abc042_b
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){

   multiset<string>s;
   int n,l;
   cin>>n>>l;
   while(n--){
      string ss;cin>>ss;
      s.insert(ss);
   }
   for(auto i:s){
      cout<<i;
   }
   cout<<endl;

  
}
int main(){
   solve();
   return 0;
}