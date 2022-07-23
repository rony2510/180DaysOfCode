/**
 *    author:  Captcha
 * 	       RONY HAJONG
 * 	       CSE'18, SUST
**/
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define pi acos(-1)
#define MOD 1000000007
#define MAX 1000
#define f1(i,a) for(int i=0;i<a;++i)
#define f2(i,a) for(int i=a-1;i>=0;--i)
#define yes printf("YES\n");
#define no printf("NO\n");
typedef ll int lli;
const int mxSize=2e5+10;
using namespace std;

bool com(int a,int b){
	return a>b;
}
bool cmp(pair<int,int>p,pair<int,int>q){
	return p.first>q.first;
	return p.second>q.second;
}


ll dp[mxSize];


int solve(){

	deque<int>dq;

// size & max size
	// cout<<dq.size()<<endl;
	// cout<<dq.max_size()<<endl;



//	push
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		dq.push_back(x);
	}
	dq.push_front(100);
	dq.push_front(50);

	dq.emplace_back(5);
	dq.emplace_front(1000);

	auto it=dq.begin();
	dq.emplace(it+1,500);
	++it;
	dq.emplace(it,600);

	


// print

	cout<<dq.front()<<endl;

	for(auto i:dq){
		cout<<i<<" ";
	}
	cout<<endl;

	for(auto i=dq.begin();i!=dq.end();++i){
		cout<<*i<<" ";
	}
	cout<<endl;

	for(auto i=dq.cbegin();i!=dq.cend();++i){
		cout<<*i<<" ";
	}
	cout<<endl;

	for(auto i=dq.rbegin();i!=dq.rend();++i){
		cout<<*i<<" ";
	}
	cout<<endl;


// empty
	(dq.empty())?cout<<"Empty"<<endl:cout<<"No"<<endl;


// erase & clear
	// dq.erase(dq.begin());
	// dq.erase(dq.begin(),dq.begin()+3);
	// dq.erase(dq.begin(),dq.end());
	// dq.erase(dq.end());
	// dq.erase(dq.end(),dq.end()+2);
	
	dq.clear();


// assign

	dq.assign(10,100);

// at
	for(int i=0;i<3;++i){
		dq.at(i)=10;
	}

// pop

	dq.pop_back();
	dq.pop_front();

// insert
	it=dq.begin();
	dq.insert(it,55);
	++it;
	dq.insert(it,105);
	dq.insert(it,30);

// resize
	dq.resize(5);

// swqp

	deque<int>dq1;
	dq1.swap(dq);

	for(auto i=dq.begin();i!=dq.end();++i){
		cout<<*i<<" ";
	}
	cout<<endl;
	for(auto i=dq1.begin();i!=dq1.end();++i){
		cout<<*i<<" ";
	}
	cout<<endl;

// shrink
	dq.shrink_to_fit();

	return 0;
}



int main(){
	int test=1;//cin>>test;
	while(test--){
		solve();
	}	return 0;
}














/**
 * https://codeforces.com/profile/Captcha
 * https://www.codechef.com/users/codecloude
 * https://atcoder.jp/users/Captcha
 * https://github.com/rony2510
 * https://www.linkedin.com/in/rony2510/
 * https://www.flickr.com/people/_ronyl0__/
**/