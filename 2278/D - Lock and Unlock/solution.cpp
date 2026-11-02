// Problem: D. Lock and Unlock
// Contest: Codeforces - Codeforces Round 1131 (Div. 3)
// URL: https://codeforces.com/contest/2278/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	    int n;
	    cin>>n;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    sort(all(a));
	    int res1=a[n-1]-a[0];
	    int ind=(n+1)/2;
	    ind--;
	    int res=0;
	    fori(i,0,ind){
	    	res+=abs(a[ind]-a[i]);
	    }
	    fori(i,ind+1,n){
	    	res+=abs(a[ind]-a[i]);
	    }
	    cout<<res<<" "<<res1<<endl;
	    
	}
 
}