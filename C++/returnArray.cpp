#include <bits/stdc++.h>
using namespace std;

/*
5
2
1 1
1 2
2
2 2
2 1
3
3 3 1
3 2
5
2 3 4 5 3
3 1
6
1 1 2 3 4 6
1 5
*/

int *lor(int *a,int n){
    static int res[2];

    map<int,int>mp;
    for(int i=0;i<n;++i){
        ++mp[a[i]];
    }
    for(int i=1;i<=n;++i){
        if(mp[i]==0){
            res[1]=i;
            break;
        }
    }
    for(int i=1;i<=n;++i){
        if(mp[i]==2){
            res[0]=i;
            break;
        }
    }

    return res;
}
int solve(){

    int n;
    cin>>n;
    int a[n+100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);

    // for(int i=0;i<n;++i){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    auto ans=lor(a,n);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    



	return 0;
}
int main(){

    int test=1;
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