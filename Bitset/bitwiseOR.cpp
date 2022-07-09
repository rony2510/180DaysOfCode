#include <bits/stdc++.h>
using namespace std;

/*
result of OR is 1 if any of the two bits is 1
*/
int main(){

    bitset<16>x;
    
    int a,b;
    cin>>a>>b;
    cout<<(a|b)<<endl;
    x=a;
    cout<<x<<endl;
    x=b;
    cout<<x<<endl;
    x=a|b;
    cout<<x<<endl;


    return 0;
}