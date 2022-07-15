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
#define yes printf("YES\n");
#define no printf("NO\n");
typedef ll int lli;
const int mxSize=2e5+10;
using namespace std;

bool com(int a,int b){
	return a>b;
}
bool cmp(pair<int,int>p,pair<int,int>q){
	return p.first>q.first;
	return p.second>q.second;
}


ll dp[mxSize];


template<typename T>
T power(T a,T n){
	if(n==0)return 1;if(a==0)return 0;if(a==1)return 1;
	T power=1;
	for(int i=1;i<=n;++i){
		power*=a;
	}return power;
}


int solve(){

	ll a,b;
	cin>>a>>b;
	ll ans=power(a,b);
	cout<<ans<<endl;
	
	
	
	return 0;
}



int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}