#include <bits/stdc++.h>
using namespace std;

/*
takes two numbers, right shifts the bits of the first operand,
the second operand decides the number of places to shift. 
*/
int main(){

    bitset<16>x;
    
    int a;
    cin>>a;
    cout<<(a>>2)<<endl;
    x=a;
    cout<<x<<endl;
    x=a>>2;
    cout<<x<<endl;


    return 0;
}