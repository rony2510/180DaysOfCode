/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;



int solve(){

	string s;
	cin>>s;
	map<char,char>mp;

	mp[')']='(';
	mp['}']='{';
	mp[']']='[';

	stack<char>st;
	for(int i=0;i<s.size();++i){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);
		}
		else{
			if(st.empty() || st.top()!=mp[s[i]]){
				return cout<<"NO"<<endl,0;
			}
			else{
				st.pop();
			}
		}
	}
	if(st.size()>0){
		return cout<<"NO"<<endl,0;
	}
	cout<<"YES"<<endl;
	
   	return 0;
}



int main(){
	int test=1;
	// cin>>test;
	for(int i=1;i<=test;++i){
		solve();
	}	return 0;
}