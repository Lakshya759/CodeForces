// Problem: B. Knife's Pill Farm
// Contest: Codeforces - Codeforces Round 1121 (Div. 2)
// URL: https://codeforces.com/contest/2264/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
 
#define fori(i,a,d) for(int i=a; i<d; i++)
#define ford(i,a,d) for(int i=a; i>=d; i--)
#define v(a,n) vector<int>a(n);
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n,m;
	    cin>>n>>m;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    if(m==1){
	    	cout<<*max_element(a.begin(), a.end())<<endl;
	    	continue;
	    }
	    priority_queue<int> pq;
	    int sum=0;
	    fori(i,0,m-1){
	    	pq.push(a[i]);
	    	sum+=a[i];
	    }
	    int res=INT_MIN;
	    fori(i,m-1,n){
	    	int x=(m*a[i])-sum;
	    	res=max(res,x);
	    	if(a[i]<pq.top()){
	    		sum-=pq.top();
	    		sum+=a[i];
	    		pq.pop();pq.push(a[i]);
	    		
	    	}
	    }
	    cout<<res<<endl;
	    
	}
 
}