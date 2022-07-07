/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/

#include <bits/stdc++.h>
using namespace std;


// 1
void sortIncreasing(int a[],int n){
   sort(a,a+n);
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;
}


// 2
bool compA(int a,int b){
      return a<b;
}
void sortNonDecreasing(int a[],int n){
   sort(a,a+n,compA);
   for(int i=0;i<n;++i){
      cout<<a[i]<<" ";
   }
   cout<<endl;
}


// 3
bool compB(int a,int b){
      return a>b;
}
void sortDecreasing(int a[],int n){
   sort(a,a+n,compB);
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

   sortIncreasing(a,n);
   sortNonDecreasing(a,n);
   sortDecreasing(a,n);


   return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
**/