#include<bits/stdc++.h>
using namespace std;


/*
O(n),O(range)
*/
int main(){

    int n;
    cin>>n;
    int a[n+100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    (is_sorted(a,a+n))?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
    (is_sorted(a,a+3))?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
    (is_sorted(a+2,a+4))?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
    (is_sorted(a+1,a+n))?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
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