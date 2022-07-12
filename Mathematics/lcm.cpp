#include <bits/stdc++.h>
using namespace std;

int main(){

	int x,y;
    cin>>x>>y;

    int gcd=__gcd(x,y);
    int lcm=(x*y)/gcd;

    cout<<lcm<<endl;
	
	return 0;
}