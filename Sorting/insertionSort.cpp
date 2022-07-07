/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



void insertionSort(int a[],int n){

   int i,j,key;

   for(i=1;i<n;++i){
      key=a[i];
      j=i-1;
      while(j>=0 && a[j]>key){
         a[j+1]=a[j];
         --j;
      }
      a[j+1]=key;
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

   insertionSort(a,n);

   return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
**/