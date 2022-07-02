/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
linear search
*/
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int n,int x){
   
   int l=1,r=n;
   while(l<=r){
      if(a[l]==x){
         return cout<<l<<endl,0;
      }
      if(a[r]==x){
         return cout<<r<<endl,0;
      }
      ++l,--r;
   }

   cout<<-1<<endl;
   return 0;
}
int main(){
   int n,x;
   cin>>n>>x;
   int a[n+10];
   for(int i=1;i<=n;++i){
      cin>>a[i];
   }
   linearSearch(a,n,x);
   return 0;
}