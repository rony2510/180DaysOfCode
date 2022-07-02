/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
binary search
*/
#include <bits/stdc++.h>
using namespace std;


int binarySearch(int a[],int n,int x){
   int l=1,r=n;
   
   while(l<=r){
      int m=(l+r)/2;
      if(a[m]==x){
         cout<<m<<endl;return 0;
      }
      if(a[m]<x){
         l=m+1;
      }
      else{
         r=m-1;
      }
   }
   cout<<-1<<endl;
   return 0;
}
int main(){

   int n,x;
   cin>>n>>x;
   int a[n];
   for(int i=1;i<=n;++i){
      cin>>a[i];
   }
   binarySearch(a,n,x);

   return 0;
}