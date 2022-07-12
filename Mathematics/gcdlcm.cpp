/*
lcm(a,b)*gcd(a,b)=a*b
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    cout<<__gcd(a,b)<<endl;//gcd
    cout<<a*b/(__gcd(a,b))<<endl;//lcm
    
    

    return 0;
}