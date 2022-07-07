/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



void selectionSort(int a[],int n){
   for(int i=0;i<n-1;++i){
      int in=i;
      for(int j=i+1;j<n;++j){
         if(a[j]<a[in]){
            in=j;
         }
      }
      swap(a[i],a[in]);
   }

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

   selectionSort(a,n);

   return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
**/