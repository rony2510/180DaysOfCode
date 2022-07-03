/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
/*
https://atcoder.jp/contests/abc045/tasks/abc045_b
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


int main(){

	string a,b,c;
	cin>>a>>b>>c;

	int na=a.size();
	int nb=b.size();
	int nc=c.size();

	int ia=0,ib=0,ic=0;
	char pres='a';
	while(ia<na+1 && ib<nb+1 && ic<nc+1){
		if(pres=='a'){
			pres=a[ia];
			ia++;
			continue;;
		}
		if(pres=='b'){
			pres=b[ib];
			ib++;
			continue;
		}
		if(pres=='c'){
			pres=c[ic];
			++ic;
			continue;
		}
	}
	if(ia==na+1)cout<<"A"<<endl;
	else if(ib==nb+1)cout<<"B"<<endl;
	else cout<<"C"<<endl;



	return 0;
}