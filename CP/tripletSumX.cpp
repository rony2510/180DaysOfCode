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
https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1?page=2&difficulty[]=1&sortBy=submissions
*/
/*
9
1 2 2 3 4 5 6 7
1
24 986
557 217 627 358 527 358 338 272 870 362 897 23 618 113 718 697 586 42 424 130 230 566 560 933
1
*/

int solve(){

    int n;ll x;
    cin>>n>>x;

    ll a[n+100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n<3){
        return cout<<0<<endl,0;
    }

    // for(int i=0;i<n;++i){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    ll sum=0;
    for(int i=0;i<n;++i){
        sum=a[i];
        int j=0,k=n-1;
        while(j<k){
            if(j==i){
                ++j;
            }
            if(k==i){
                --k;
            }
            if(j<k){
            if(sum+a[j]+a[k]==x){
                return cout<<1<<endl,0;
            }
            else if(sum+a[j]+a[k]<x){
                ++j;
            }
            else{
                --k;
            }
            }
        }
    }

    return cout<<0<<endl,0;

	
	



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