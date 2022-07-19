/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



int main(){

   int n;
   cin>>n;
   char a[n];
   for(int i=0;i<n;++i){
      cin>>a[i];
   }
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;

   memset(a,'a',sizeof(a));

   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;

   memset(a,'b',sizeof(a));

   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;

   memset(a,'P',sizeof(a));

   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
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