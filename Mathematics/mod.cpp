#include <bits/stdc++.h>
using namespace std;
long long mod=1000000007;
/*
(a+b)%mod==((a%mod)+(b%mod))%mod;
(a-b)%mod==((a%mod)-(b%mod))%mod;
(a*b)%mod==((a%mod)*(b%mod))%mod;
*/
int main(){

	long long a,b,x,y;

	cin>>a>>b;
	// x=(a+b)%mod;
	x=(a*b)%mod;
	cout<<x<<endl;
	
	// y=((a%mod)+(b%mod))%mod;
	y=((a%mod)*(b%mod))%mod;
	cout<<y<<endl;
	
	return 0;
}