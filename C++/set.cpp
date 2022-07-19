/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;




int main(){

   set<int>s;
   int n;
   cin>>n;
   while(n--){
      int x;
      cin>>x;
      s.insert(x);
   }

   cout<<s.size()<<endl;
   for(auto i:s){
      cout<<i<<" ";
   }
   cout<<"\n";
   

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