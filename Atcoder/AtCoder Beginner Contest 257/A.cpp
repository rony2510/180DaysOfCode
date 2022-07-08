/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 1
**/


/*
https://atcoder.jp/contests/abc257/tasks/abc257_a
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

   int n,x;
   cin>>n>>x;
   vector<char>v;
   for(char c='A';c<='Z';++c){
      for(int i=1;i<=n;++i){
         v.push_back(c);
      }
   }

   cout<<v[x-1]<<endl;

   return 0;
}