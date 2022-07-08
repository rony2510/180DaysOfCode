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
#define Sort(a) sort(a,a+n);
#define Reverse(a) reverse(a,a+n);
typedef ll int lli;
const int mxSize=2e5+10;
const ll INF=1e9+7;
using namespace std;

bool com(int a,int b){
	return a>b;
}
bool cmp(pair<int,int>p,pair<int,int>q){
	return p.first>q.first;
	return p.second>q.second;
}

ll dp[mxSize];
bool ok=true;

int solve(){

	int t;
	cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		ll p=1,ans=0;

		f1(i,31){
			if(k & (1<<i)){
				ans=(ans+p)%INF;
			}
			p*=n;
			p%=INF;
		}

		cout<<ans<<endl;
	}


	return 0;
}

int main(){
	solve();
	return 0;
}