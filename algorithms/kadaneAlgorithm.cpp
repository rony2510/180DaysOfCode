/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define pi acos(-1)
#define MOD 1000000007
#define MAX 1000
#define f1(i,a) for(int i=0;i<a;++i)
#define f2(i,a) for(int i=a-1;i>=0;--i)
#define yes printf("YES\n")
#define no printf("NO\n")
typedef ll int lli;
using namespace std;

bool com(int a,int b){
	return a>b;
}
bool cmp(pair<int,int>p,pair<int,int>q){
	return p.first>q.first;
	return p.second>q.second;
}

const int mxSize=2e5+10;
ll dp[mxSize];

/*
5
5     
1 2 3 4 5
15
3
-1 -2 0
0
3
-1 -2 -3
-1
5
-1 2 4 0 -1
6
1
100
100
*/
int solve(){


	int n;
	cin>>n;
	ll a[n+100];
	f1(i,n){
		cin>>a[i];
	}

	ll ans=-1000000000;
	ll x=0;
	f1(i,n){
		x+=a[i];
		if(ans<x)ans=x;
		if(x<0)x=0;
	}

	cout<<ans<<endl;
	



	return 0;
}



int main(){
	int test=1;
	cin>>test;
	while(test--){
		solve();
	}	return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/