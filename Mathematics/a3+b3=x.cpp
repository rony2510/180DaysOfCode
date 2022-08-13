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
#define f1(a,b) for(int i=a;i<=b;++i)
#define f2(a,b) for(int i=b;i>=a;--i)
#define yes printf("YES\n")
#define no printf("NO\n")
typedef ll int lli;
using namespace std;


const int mxSize=2e5+10;
ll dp[mxSize];

bool com(int a,int b){
	return a>b;
}
bool cmp(pair<int,int>p,pair<int,int>q){
	return p.first>q.first;
	return p.second>q.second;
}



template<typename T>
T power(T a,T n){
	if(n==0)return 1;if(a==0)return 0;if(a==1)return 1;
	T power=1;
	for(int i=1;i<=n;++i){
		power*=a;
	}return power;
}








/*
is there a and b for which
a^2+b^2=x
x is given
*/







const ll lim=1000000000000L;
set<ll>s;
void cal(){
	for(ll i=1;i*i*i<=lim;++i){
		s.insert(i*i*i);
	}
}
int solve(){

	ll n;
	cin>>n;
	for(ll i=1;i*i<=n;++i){
		if(s.count(n-i*i*i)){
			return cout<<"YES"<<endl,0;
		}
	}
	cout<<"NO"<<endl;

	
	

	return 0;
	
}



int main(){
	cal();
	int test=1;
    cin>>test;
	while(test--){
		solve();
	}	return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/