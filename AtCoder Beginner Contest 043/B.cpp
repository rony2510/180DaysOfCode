/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
https://atcoder.jp/contests/abc043/tasks/abc043_b
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){

   vector<char>q;
   string s;
   cin>>s;
   for(int i=0;i<s.size();++i){
      if(s[i]=='B'){
         if(!q.empty()){
            q.pop_back();
         }
      }
      else{
         q.push_back(s[i]);
      }
   }
   for(auto i:q){
      cout<<i;
   }
   cout<<endl;

  
}
int main(){
   solve();
   return 0;
}