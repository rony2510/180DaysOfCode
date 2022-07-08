/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 1
**/


/*
https://atcoder.jp/contests/abc257/tasks/abc257_b
*/
#include <bits/stdc++.h>
using namespace std;

int a[5000];
int main(){
/*
5 3 5
1 3 4
3 3 1 1 2
*/
   int n,k,q;
   cin>>n>>k>>q;
   int b[k];
   for(int i=1;i<=k;++i){
      cin>>b[i];
      a[b[i]]=1;
   }
   while(q--){
      int x;
      cin>>x;
      int p=b[x];
      if(p!=n && a[p+1]==0){
         a[p+1]=1;
         a[p]=0;
         b[x]=p+1;
      }
   }

   for(int i=1;i<=n;++i){
      if(a[i]==1){
         cout<<i<<" ";
      }
   }
   cout<<endl;

   return 0;
}