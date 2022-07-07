/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



void bubbleSort(int a[],int n){
   for(int i=0;i<n-1;++i){
      for(int j=0;j<n-i-1;++j){
         if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
         }
      }
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

   bubbleSort(a,n);

   return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
**/