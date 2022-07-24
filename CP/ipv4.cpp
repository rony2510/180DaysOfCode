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
#define yes printf("YES\n")
#define no printf("NO\n")
typedef ll int lli;
using namespace std;

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

const int mxSize=2e5+10;
ll dp[mxSize];


int solve(){

	string s;
	cin>>s;
	int n=s.size();
	int x1,x2,x3,x4;

	vector<int>v;
	f1(i,n){
		if(s[i]=='.'){
			v.push_back(i);
		}
		else if(s[i]<'0' || s[i]>'9'){
		    return cout<<0<<endl,0;
		}
	}
	if(v.size()!=3){
		return cout<<0<<endl,0;
	}
/*
IPV4
(0-255).(0-255).(0-255).(0-255)
x1.x2.x3.x4
*/
	int j,k;
	j=0,k=v[0]-1;
	if(k<j){
		return cout<<0<<endl,0;
	}
	int p=0;
	int cnt=0;
	for(int i=k;i>=j;--i){
		p+=(s[i]-'0')*power(10,cnt);
		++cnt;
	}
	if(k-j+1>1 && s[j]=='0'){
		return cout<<0<<endl,0;
	}
	x1=p;
	if(p<0 || p>255){
		return cout<<0<<endl,0;
	}




	j=v[0]+1;
	k=v[1]-1;
	if(k<j){
		return cout<<0<<endl,0;
	}
	p=0;
	cnt=0;
		for(int i=k;i>=j;--i){
		p+=(s[i]-'0')*power(10,cnt);
		++cnt;
	}
	if(k-j+1>1 && s[j]=='0'){
		return cout<<0<<endl,0;
	}
	x2=p;
	if(p<0 || p>255){
		return cout<<0<<endl,0;
	}

	j=v[1]+1;
	k=v[2]-1;
	if(k<j){
		return cout<<0<<endl,0;
	}
	p=0;
	cnt=0;
		for(int i=k;i>=j;--i){
		p+=(s[i]-'0')*power(10,cnt);
		++cnt;
	}
	if(k-j+1>1 && s[j]=='0'){
		return cout<<0<<endl,0;
	}
	x3=p;
	if(p<0 || p>255){
		return cout<<0<<endl,0;
	}

	j=v[2]+1;
	k=n-1;
	if(k<j){
		return cout<<0<<endl,0;
	}
	p=0;
	cnt=0;
		for(int i=k;i>=j;--i){
		p+=(s[i]-'0')*power(10,cnt);
		++cnt;
	}
	if(k-j+1>1 && s[j]=='0'){
		return cout<<0<<endl,0;
	}
	x4=p;
	if(p<0 || p>255){
		return cout<<0<<endl,0;
	}

	cout<<1<<endl;
	cout<<x1<<"."<<x2<<"."<<x3<<"."<<x4<<endl;



	return 0;
}



int main(){
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