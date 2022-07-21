/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;


int integer(){
   
   int n;
   cin>>n;
   int a[n+50];
   for(int i=0;i<n;++i){
      cin>>a[i];
   }

   int i=0,j=n-1;
   while(i<=j){
      if(a[i]!=a[j]){
         return cout<<"NO"<<endl,0;
      }
      ++i,--j;
   }
   cout<<"YES"<<endl;


   return 0;
}


int strin(){
   string s;
   cin>>s;
   int n=s.size();
   int i=0,j=n-1;
   while(i<=j){
      if(s[i]!=s[j]){
         return cout<<"NO"<<endl,0;
      }
      ++i,--j;
   }
   cout<<"YES"<<endl;
   return 0;
}
int main(){

   integer();

   strin();
   
}















/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/