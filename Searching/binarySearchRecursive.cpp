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


int binarySearch(int a[],int l,int r,int x){
   if(l<=r){
      int m=l+(r-l)/2;
      if(a[m]==x){
         return m;
      }
      if(a[m]<x){
         return binarySearch(a,m+1,r,x);
      }
      else{
         return binarySearch(a,l,m-1,x);
      }
   }
   return -1;
}
int main(){

   int n,x;
   cin>>n>>x;
   int a[n];
   for(int i=1;i<=n;++i){
      cin>>a[i];
   }
   int ans=binarySearch(a,1,n,x);
   cout<<ans<<endl;
   
   return 0;
}