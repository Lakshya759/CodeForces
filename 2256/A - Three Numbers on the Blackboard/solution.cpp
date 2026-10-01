// Problem: A. Three Numbers on the Blackboard
// Contest: Codeforces - Codeforces Round 1116 (Div. 2)
// URL: https://codeforces.com/contest/2256/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	    
	    v(a,3);
	    cin>>a[0]>>a[1]>>a[2];
	    sort(all(a));
	    if(a[2]>a[0]+a[1]){
	    	a[2]=a[0]+a[1];
	    }
	    cout<<a[2]-a[0]<<endl;
	    
	    
	    
	}
 
}