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


// https://atcoder.jp/contests/dp/tasks/dp_h

int solve(){

	int n,m;
	cin>>n>>m;

	char ar[n+1][m+1];
	f1(i,n){
		f1(j,m){
			cin>>ar[i][j];
		}
	}

	ll dp[n+1][m+1];

	if(ar[0][0]=='.'){
		dp[0][0]=1;
	}
	else{
		dp[0][0]=0;
	}

	for(int i=1;i<n;++i){
		if(ar[i][0]=='.'){
			dp[i][0]=dp[i-1][0];
		}
		else{
			dp[i][0]=0;
		}
	}
	for(int i=1;i<m;++i){
		if(ar[0][i]=='.'){
			dp[0][i]=dp[0][i-1];
		}
		else{
			dp[0][i]=0;
		}
	}

	for(int i=1;i<n;++i){
		for(int j=1;j<m;++j){
			if(ar[i][j]=='#'){
				dp[i][j]=0;
			}
			else{
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
			}
		}
	}

	

	cout<<dp[n-1][m-1]<<endl;


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
