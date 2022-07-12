#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define pi acos(-1)
#define MOD 1000000007
#define MAX 1000
#define f1(i,a) for(int i=0;i<a;++i)
#define f2(i,a) for(int i=a-1;i>=0;--i)
#define YES printf("YES\n")
#define NO printf("NO\n")
typedef ll int lli;
const int sz=100;
const ll mx=1e18;
using namespace std;


    int CASE;


int solve(){
	ll n;
	cin>>n;

	if(n<0){
		cout<<0<<endl;
		return 0;
	}
	else if(n<=1){
		cout<<1<<endl;
		return 0;
	}

	double fac=0;
	for(int i=2;i<=n;++i){
		fac+=log10(i);
	}

	ll ans=floor(fac)+1;
	cout<<ans<<endl;
	// cout<<floor(fac)+1<<endl;
	return 0;
}



int main(){
	fastio
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}