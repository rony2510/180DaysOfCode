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
   for(int i=1;i<=n;++i){
      if(a[i]==x){
         cout<<i<<endl;return 0;
      }
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