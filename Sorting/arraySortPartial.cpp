/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/

#include <bits/stdc++.h>
using namespace std;



void iniToMid(int a[],int n){
   sort(a,a+3);
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;
}

void midToLast(int a[],int n){
   sort(a+4,a+n);
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;
}

void midToMid(int a[],int n){
   sort(a+4,a+7);
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;
}
int main(){

   int n;
   cin>>n;
   int a[n];

   for(int i=0;i<n;++i){
      cin>>a[i];
   }

   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;


   // iniToMid(a,n);
   midToLast(a,n);
   // midToMid(a,n);

   


   return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
**/