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
#define mem(x) memset(x,0,sizeof(x));
#define yes printf("YES\n")
#define no printf("NO\n")
typedef ll int lli;
using namespace std;

const int mxSize=2e5+10;
ll dp[mxSize];

bool cmp(pair<ll,int>p,pair<ll,int>q){
	return p.first<q.first;
}




// https://atcoder.jp/contests/dp/tasks/dp_a
int solve(){

	int n;
	cin>>n;

	int ar[n+5];
	f1(i,n){
		cin>>ar[i];
	}

	vector<int>dp(n,0);

	dp[1]=abs(ar[1]-ar[0]);


	for(int i=2;i<n;++i){
		dp[i]=min(abs(ar[i]-ar[i-1])+dp[i-1],abs(ar[i]-ar[i-2])+dp[i-2]);
	}

	cout<<dp[n-1]<<endl;


   	return 0;
}



int main(){
	fastio
	int test=1;
	// cin>>test;
	for(int i=1;i<=test;++i){
		solve();
	}	return 0;
}