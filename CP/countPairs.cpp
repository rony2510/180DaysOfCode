#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/magic-triplets4003/1?page=3&difficulty[]=1&category[]=Arrays&sortBy=accuracy
/*
pairs when a[i]<a[j]<a[k] and i<j<k
10
3
1 2 3
1
5
1 2 3 4 5
10
3
5 5 5
0
5
5 4 3 2 1
0
6
2 4 1 5 6 3
5
4
2 4 1 5
1
4
1 2 3 4
4
5
5 1 4 2 3
1
3
2 2 2
0
3
1 5 6
1
*/

int solve(){

    int n;
    cin>>n;
    int a[n+100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    int count=0;
    for(int i=1;i<n-1;++i){
        int temp=0;
        for(int j=i+1;j<n;++j){
            if(a[j]>a[i])++temp;
        }
        int temp1=0;
        for(int j=i-1;j>=0;--j){
            if(a[j]<a[i])++temp1;
        }

        count+=temp*temp1;
    }

    cout<<count<<endl;



	return 0;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}













/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/