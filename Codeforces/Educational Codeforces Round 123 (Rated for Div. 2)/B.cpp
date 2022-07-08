/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
/*
https://codeforces.com/contest/1644/problem/B
*/
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
	int n;
	cin>>n;

	vector<int>v;
	for(int i=n;i>=1;--i){
		v.push_back(i);
	}
	for(int i=0;i<n;++i){
		if(n==3 && i==1){
			cout<<"3 1 2"<<endl;
			continue;
		}
		for(int j=i;j<n;++j){
			cout<<v[j]<<" ";
		}
		for(int j=0;j<i;++j){
			cout<<v[j]<<" ";
		}
		cout<<endl;
	}
	
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