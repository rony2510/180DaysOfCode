/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 *       #180DaysOfCode
 *       day 2
**/


/*
https://atcoder.jp/contests/abc043/tasks/arc059_a
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;cin>>n;int a[n];
	int x=0;
	for(int i=0;i<n;++i){
		cin>>a[i];x+=a[i];
	}
	float av=round(x/(n*1.0));
	int v=av;
	long ans=0;
	for(int i=0;i<n;++i){
		ans+=((v-a[i])*(v-a[i]));
	}
	cout<<ans<<endl;

  
}
int main(){
   solve();
   return 0;
}