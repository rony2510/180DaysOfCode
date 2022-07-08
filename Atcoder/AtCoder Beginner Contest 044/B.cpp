/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
https://atcoder.jp/contests/abc044/tasks/abc044_b
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){

   multiset<char>s;
	string ss;cin>>ss;
	for(int i=0;i<ss.size();++i){
		s.insert(ss[i]);
	}
	for(int i=0;i<ss.size();++i){
		if(s.count(ss[i])%2!=0){
			cout<<"No"<<endl;return;
		}
	}
	cout<<"Yes"<<endl;

  
}
int main(){
   solve();
   return 0;
}