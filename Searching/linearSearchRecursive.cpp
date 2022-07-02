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
   if(n==0){
      return -1;
   }
   if(a[n]==x){
      return n;
   }
   else{
      return linearSearch(a,n-1,x);
   }
}
int main(){
   int n,x;
   cin>>n>>x;
   int a[n+10];
   for(int i=1;i<=n;++i){
      cin>>a[i];
   }
   int ans=linearSearch(a,n,x);
   cout<<ans<<endl;
   return 0;
}