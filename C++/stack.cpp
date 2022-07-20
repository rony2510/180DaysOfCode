/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



int main(){

   stack<int>s;
   int n;
   cin>>n;

   while(n--){
      int x;
      cin>>x;
      s.push(x);
      s.emplace(x);
   }
   s.push(100);
   s.emplace(500);


   cout<<s.size()<<endl;
   

   (s.empty())?cout<<"empty\n":cout<<"no\n";


   while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
   }


   stack<int>ss;
   s.emplace(10);
   s.push(100);
   s.swap(ss);
   while(!ss.empty()){
      cout<<ss.top()<<endl;
      ss.pop();
   }
   while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
   }
   
   

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