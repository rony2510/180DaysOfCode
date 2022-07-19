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
   long long a[n];
   for(int i=0;i<n;++i){
      cin>>a[i];
   }
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;

   memset(a,0,sizeof(a));

   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;

   memset(a,-1,sizeof(a));

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