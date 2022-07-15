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

/*
0 0 1 1 2 4 7 13 ......... 
*/
int recur(int n){

	if(n==1 || n==2){
		return 0;
	}
	if(n==3 || n==4){
		return 1;
	}
	return recur(n-1)+recur(n-2)+recur(n-3);
}
int solve(){
	
	int n;
	cin>>n;
	cout<<recur(n)<<endl;
	


	return 0;
}



int main(){
	// fastio
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}