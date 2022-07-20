/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



int main(){

   queue<int>q;
   int n;
   cin>>n;
   while(n--){
      int x;
      cin>>x;
      q.push(x);
      q.emplace(x);
   }
   q.push(100);
   q.emplace(1000);



   cout<<q.size()<<endl;



   cout<<q.back()<<endl;
   cout<<q.front()<<endl;


   (q.empty())?cout<<"empty\n":cout<<"no\n";


   while(!q.empty()){
      cout<<q.front()<<endl;
      q.pop();
   }



   queue<int>qq;
   q.emplace(5);
   q.emplace(50);
   q.swap(qq);

   while(!qq.empty()){
      cout<<qq.front()<<endl;
      qq.pop();
   }



   while(!q.empty()){
      cout<<q.front()<<endl;
      q.pop();
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