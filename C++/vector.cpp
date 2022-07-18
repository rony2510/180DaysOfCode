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


int solve(){

	int n;
	cin>>n;
	vector<ll>v;
	
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	

	return 0;
}



int main(){
	int t=1;cin>>t;
	while(t--){
		solve();
	}	return 0;
}