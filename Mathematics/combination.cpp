/*
nCr=n!/(r!*(n-r))!
n!=1*2*3*4*...........*(n-1)*n
*/


#include <bits/stdc++.h>
using namespace std;

// O(n)
int factorial(int n){
    if(n<=1)return 1;
    return n*factorial(n-1);
}
int nCr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}



int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}