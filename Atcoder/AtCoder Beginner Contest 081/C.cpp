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

	int n,k;
	cin>>n>>k;
	int a[n];
	set<int>s;
	multiset<int>count;

	f1(i,n){
		cin>>a[i];
		s.insert(a[i]);
	}
	if(s.size()<=k){
		cout<<0<<endl;
		return 0;
	}

	int c=1;
	sort(a,a+n);
	for(int i=1;i<n;++i){
		if(a[i]==a[i-1]){
			++c;
		}
		else{
			count.insert(c);
			c=1;
		}
	}
	count.insert(c);

	int j=0;
	int ans=0;
	// for(auto i:count){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	for(auto i:count){
		ans+=i;
		++j;
		if(j>=s.size()-k){
			return cout<<ans<<endl,0;
		}
	}

	return 0;
}

int main(){
	solve();
	return 0;
}