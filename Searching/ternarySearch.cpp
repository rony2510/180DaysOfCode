// ternary search
// O(log3(n))
#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int a[],int x,int n) {
    int left,right,mid1,mid2;
    left=0;
    right=n-1;
    
    while(left<=right) {
        mid1=left+((right-left)/3);
        mid2=right-((right-left)/3);

        if(a[mid1]==x) {
            return mid1+1;
        }
        if(a[mid2]==x) {
            return mid2+1;
        }

        if(x<a[mid1]) {
            right=mid1-1;
        }
        else if(x>a[mid2]) {
            left=mid2+1;
        }
        else {
            left=mid1+1;
            right=mid2-1;
        }
    }

    return -1;

}
int main() {

    int n;
    cin>>n;
    int a[n];
    int x;
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    cin>>x;

    cout<<ternarySearch(a,x,n)<<endl;



    return 0;
}