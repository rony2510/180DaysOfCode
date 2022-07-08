/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
https://atcoder.jp/contests/abc043/tasks/arc059_b
*/
#include <bits/stdc++.h>
using namespace std;

int solve(){
    string s;cin>>s;int n=s.size();
	s[n]='A';s[n+1]='B';
	if(n==2){
		if(s[0]==s[1]){
			cout<<1<<" "<<2<<endl;return 0;
		}
		else{
			cout<<-1<<" "<<-1<<endl;return 0;
		}
	}
	for(int i=0;i<n;++i){
		if(s[i]==s[i+1] && s[i]!=s[i+2]){
			cout<<i+1<<" "<<i+3<<endl;return 0;
		}
		if(s[i]==s[i+2] && s[i]!=s[i+1]){
			cout<<i+1<<" "<<i+3<<endl;return 0;
		}
		if(s[i+2]==s[i+1] && s[i+2]!=s[i]){
			cout<<i+1<<" "<<i+3<<endl;return 0;
		}
	}
	cout<<-1<<" "<<-1<<endl;
    return 0;
  
}
int main(){
   solve();
   return 0;
}