/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
/*
https://codeforces.com/contest/1698/problem/C
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

	int n;cin>>n;
	vector<int>pos,neg,a;
	f1(i,n){
		int x;cin>>x;
		if(x>0){
			pos.push_back(x);
		}
		else if(x<0){
			neg.push_back(x);
		}
		else{
			if(a.size()<2)a.push_back(x);
		}
	}

	if(pos.size()>2 || neg.size()>2){
		return cout<<"NO"<<endl,0;
	}
	for(int i:pos){
		a.push_back(i);
	}
	for(int i:neg){
		a.push_back(i);
	}

	for(int i=0;i<a.size();++i){
		for(int j=i+1;j<a.size();++j){
			for(int k=j+1;k<a.size();++k){
				bool ok=false;
				for(int l=0;l<a.size();++l){
					if(a[i]+a[j]+a[k]==a[l]){
						ok=true;
					}
				}
				if(!ok){
					cout<<"NO"<<endl;return 0;
				}
			}
		}
	}


	cout<<"YES"<<endl;
	

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