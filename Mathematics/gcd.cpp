#include <bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
    if(x==0){
        return y;
    }
    if(y==0){
        return x;
    }
    if(x==y){
        return x;
        return y;
    }
    if(x>y){
        return gcd(x-y,y);
    }
    return gcd(x,y-x);
}
int main(){

    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;
	return 0;
}