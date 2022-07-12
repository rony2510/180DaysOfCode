#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define pi acos(-1)
#define MOD 1000000007
#define MAX 1000
#define f1(i,a) for(int i=0;i<a;++i)
#define f2(i,a) for(int i=a-1;i>=0;--i)
#define line puts("");
#define elif else if
typedef ll int lli;
const int sz=100;
using namespace std;


    int CASE;


int solve(){
    
	ll a;
	cin>>a;
	if(a<=2){
		cout<<-1<<endl;
		return 0;
	}
	if(a%4==0){
		cout<<a/4*3<<" "<<a/4*5<<endl;
		return 0;
	}
	if(a%2==0){
		ll b=a/2;
		cout<<(b*b/2)*2<<" "<<(b*b/2+1)*2<<endl;
		return 0;
	}
	ll b=a;
	cout<<(b*b/2)<<" "<<(b*b/2+1)<<endl;

	return 0;
}



int main(){
	fastio
	/*
    freopen("inn.txt","r",stdin);
    freopen("ouu.txt","w",stdout);
	*/
	int t;
    t=1;
	// scanf("%d",&t);
	while(t--){
        solve();
    }
	return 0;
}