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
/*
5
6
1 2 3 4 4 5
5
5
1 2 3 4 5
5
4
3 3 5 6
2
6
2 3 4 4 3 2
3
10
1 2 3 4 5 1 2 3 4 7
5
*/

int solve(){

	int n;
	cin>>n;

	int a[n+100];
	f1(i,n){
		cin>>a[i];
	}
	sort(a,a+n);

	int ans=0;
	int cnt=1;
	for(int i=1;i<n;++i){
		if(a[i]-a[i-1]==1){
			++cnt;
		}
		else if(a[i]-a[i-1]==0){
			cnt=cnt;
		}
		else{
			if(ans<cnt)ans=cnt;
			cnt=1;
		}
	}
	if(ans<cnt)ans=cnt;

	cout<<ans<<endl;



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