/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://www.linkedin.com/in/rony2510/
 * https://github.com/rony2510
**/
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll  long long
#define pi acos(-1)
#define MOD 1000000007
#define MAX 1000
#define f1(i,a) for(int i=0;i<a;++i)
#define f2(i,a) for(int i=a-1;i>=0;--i)
#define mem(x) memset(x,0,sizeof(x));
#define ALL(v) v.begin(),v.end()
#define yes printf("YES\n")
#define no printf("NO\n")
#define REP(i,a,b) for(int i=a;i<=b;i++)
typedef ll int lli;
const ll N=2e6+5;
ll ar[N];
using namespace std;

const int mxSize=2e5+10;
ll dp[mxSize];

bool cmp(pair<int,int>p,pair<int,int>q){
    return p.second<q.second;
}

bool isprime(int n){
	for(int i=2;i*i<=n;++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}



int solve(){

				/*work hard,don't waste your time,don't sit idle*/      
	
	/*
	meeting schedule hase start and end time. once a meeting starts on one can enter or leave.
	determine max number of meetings can be attended by a person.
	*/
	/*
		sort according 2nd elements of pairing ASC
		initialize ans=1,current=ending[0].second
		iterate from index 1(0 based index)
		if start[i]>=current
			++ans
			current=ending[i]
		return ans
	*/
	int n;
	cin>>n;
	int end[n+10],start[n+10];
	f1(i,n){
		cin>>start[i];
	}
	f1(i,n){
		cin>>end[i];
	}

	vector<pair<int,int>>vp;
	f1(i,n){
		vp.push_back({start[i],end[i]});
	}

	int ans=1;
	sort(vp.begin(),vp.end(),cmp);
	int cur=vp[0].second;
	for(int i=1;i<n;++i){
		if(vp[i].first>=cur){
			++ans;
			cur=vp[i].second;
		}
	}
	cout<<ans<<endl;
    
	return 0;

	
	for(auto i:vp){
		cout<<i.first<<" "<<i.second<<endl;
	}
			
   	return 0;
}

/*
n=3
start=[1,1,2]
end=[3,2,4]
ans=2

n=4
start=[1,1,2,3]
end=[2,3,3,4]
ans=3

n=4
start=[6,1,2,3]
end=[8,9,4,7]
ans=2
*/





int main(){
	int test=1;
	// cin>>test;
	for(int i=1;i<=test;++i){
		solve();
	}return 0;
}