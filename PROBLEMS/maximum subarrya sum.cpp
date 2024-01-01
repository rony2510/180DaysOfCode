/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://www.linkedin.com/in/rony2510/
 * https://github.com/rony2510
**/
#include <bits/stdc++.h>
using namespace std;

int solve(){

	/*
		KADANE'S Algorithm
	*/
	
	int n;
	cin>>n;
	int ar[n+5];
	for(int i=0;i<n;++i){
		cin>>ar[i];
	}
	int ans=ar[0],sum=0;
	for(int i=0;i<n;++i){
		sum+=ar[i];
		ans=max(ans,sum);
		if(sum<0)sum=0;
	}

	cout<<ans<<endl;
	


			
   	return 0;
}







int main(){
	int test=1;
	cin>>test;
	for(int i=1;i<=test;++i){
		solve();
	}return 0;
}