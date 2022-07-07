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
	string s,t;
	cin>>s>>t;
	set<char>p,q;
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());

	for(int i=0;i<s.size();++i){
		p.insert(s[i]);
	}
	for(int i=0;i<t.size();++i){
		q.insert(t[i]);
	}

	int i=t.size()-1;
	int j=0;
	int n=s.size();
	
	while(i>=0 && j<n){
		if(t[i]>s[j]){
			cout<<"Yes"<<endl;return 0;
		}
		++j;
		--i;
	}
	if(s.size()>=t.size()){
		return cout<<"No"<<endl,0;
	}

	if(t[t.size()-1]>=s[0] && p.size()==q.size()){
		return cout<<"Yes"<<endl,0;
	}
	cout<<"No"<<endl;

	return 0;
}

int main(){
	solve();
	return 0;
}