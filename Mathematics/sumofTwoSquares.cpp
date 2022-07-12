#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define scan(a) scanf("%lld",&a);
#define print(a) printf("%lld\n",a);
#define scan2(a,b) scanf("%lld %lld",&a,&b);
#define print2(a,b) printf("%d %d\n",a,b);
#define scan3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
#define print3(a,b,c) printf("%lld %lld %lld\n",a,b,c);
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ll long long
#define ull unsigned long long
#define sll signed long long
#define pi acos(-1)
#define MOD 1000000007
#define MAX 1000
#define MP make_pair
#define F first
#define S second
#define f1(i,a) for(int i=0;i<a;++i)
#define f2(i,a) for(int i=a-1;i>=0;--i)
#define so(a) sort(a.begin(),a.end());
#define reve(a) reverse(a.begin(),a.end());
#define sortA(a) sort(a,a+n);
#define line puts("");
#define elif else if
typedef ll int lli;
typedef sll int slli;
typedef ull int ulli;
const int sz=100;
#pragma pack(1)
using namespace std;

    int CASE;


ll maxx=1e10;
const ll N=1000000000000L;

set<ll>s;
void cal() {
    
    for(ll i=1;i*i<=1000000;++i) {
        s.insert(i*i);
    }
}

int solve() {
    ll x;
    cin>>x;

    for(ll i=1;i*i<=x;++i) {
        if(s.count(x-i*i)) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}

int main() {

    // #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
    // #endif

    cal();

    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}