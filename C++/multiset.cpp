/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



int main(){

   
   multiset<int>ms;
   int n;
   cin>>n;
   while(n--){
      int x;
      cin>>x;
      ms.insert(x);
   }

   cout<<ms.size()<<endl;
   for(auto i:ms){
      cout<<i<<" ";
   }
   cout<<endl;
   

   return 0;
}















/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/