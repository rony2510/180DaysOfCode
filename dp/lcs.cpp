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
#define mem(x) memset(x,0,sizeof(x));
#define yes printf("YES\n")
#define no printf("NO\n")
typedef ll int lli;
using namespace std;

const int mxSize=2e5+10;
ll dp[mxSize];

bool cmp(pair<ll,int>p,pair<ll,int>q){
	return p.first<q.first;
}

int solve(){

	string text1,text2;
	cin>>text1>>text2;

		int n=text1.size();
        int m=text2.size();

        int dp[n+1][m+1];
        for(int i=0;i<=n;++i){
            for(int j=0;j<=m;++j){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

	
	int lim=dp[n][m];

	char lcs[lim+1];
	lcs[lim]='\0';
	int i=n,j=m;
	while(i>0 && j>0){
		if(text1[i-1]==text2[j-1]){
			lcs[lim-1]=text1[i-1];
			--i,--j,--lim;
		}
		else if(dp[i-1][j]>dp[i][j-1]){
			--i;
		}
		else{
			--j;
		}
	}

	cout<<lcs<<endl;


   	return 0;
}



int main(){
	fastio
	int test=1;
	// cin>>test;
	for(int i=1;i<=test;++i){
		solve();
	}	return 0;
}