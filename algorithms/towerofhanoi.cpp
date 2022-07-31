#include <bits/stdc++.h>
using namespace std;



void towerofhanoi(int n,char source,char destination,char aux){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,source,aux,destination);
    cout<<"Move Disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    towerofhanoi(n-1,aux,destination,source);
}
int main(){

    int n;
    cin>>n;
    towerofhanoi(n,'A','C','B');


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