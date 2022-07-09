#include <bits/stdc++.h>
using namespace std;

/*
 takes one number and inverts all bits of it
*/
int main(){

    bitset<8>x;
    
    int a;
    cin>>a;
    cout<<(~a)<<endl;
    x=a;
    cout<<x<<endl;
    x=~a;
    cout<<x<<endl;


    return 0;
}