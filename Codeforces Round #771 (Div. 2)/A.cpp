/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
/*
https://codeforces.com/contest/1638/problem/A
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
	int a[n+10];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int det=0;
	int q=n;
	for(int i=0;i<n;++i){
		if(i+1==a[i] && det==0){
			cout<<i+1<<" ";
		}
		else{
			if(det==0){
				int k=i;
				for(int j=i;j<n;++j){
					if(a[j]==i+1){
						q=j;
						for(int p=j;p>=i;--p){
							cout<<a[p]<<" ";
						}
						break;
					}
				}
				det=1;
			}
			else{
				if(i>q){
				cout<<a[i]<<" ";
				}
			}
		}
	}
	cout<<endl;
	
	
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