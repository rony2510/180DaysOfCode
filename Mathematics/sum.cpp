#include <bits/stdc++.h>
using namespace std;

// 1+2+3+4+5+......+(n-1)+n
int sumA(int n){
    int sum=0;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    /*
    sum=n*(n+1)/2;
    */
    return sum;
}

// 1+4+9+16+.........+((n-1)*(n-1))+(n*n)
int sumB(int n){
    int sum=0;
    for(int i=1;i<=n;++i){
        sum+=(i*i);
    }
    /*
    sum=n*(n+1)*(2*n+1)/6;
    */
    return sum;
}

// 1+8+27+.....+(n-1)*(n-1)*(n-1)+(n*n*n)
int sumC(int n){
    int sum=0;
    for(int i=1;i<=n;++i){
        sum+=(i*i*i);
    }
    /*
    sum=(n*(n+1)/2)*(n*(n+1)/2);
    */
    return sum;
}
int main(){
    cout<<sumA(6)<<endl;
    cout<<sumB(3)<<endl;
    cout<<sumC(3)<<endl;

    return 0;
}