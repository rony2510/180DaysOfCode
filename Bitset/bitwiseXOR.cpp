#include <bits/stdc++.h>
using namespace std;
/*
result of XOR is 1 if the two bits are different
*/
int main(){

    bitset<16>x;
    
    int a,b;
    cin>>a>>b;
    cout<<(a^b)<<endl;
    x=a;
    cout<<x<<endl;
    x=b;
    cout<<x<<endl;
    x=a^b;
    cout<<x<<endl;


    return 0;
}