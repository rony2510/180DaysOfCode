/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>v;

    int n;
    cin>>n;
    while(n--){
        vector<int>ans;
        int m;
        cin>>m;

        for(int i=1;i<=m;++i){
            int c;
            cin>>c;
            ans.push_back(c);
        }

        v.push_back(ans);
    }

    // for(auto i:v){
    //     for(int k=0;k<i.size();++k){
    //         cout<<i[k]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}