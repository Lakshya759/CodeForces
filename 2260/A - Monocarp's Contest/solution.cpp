// Problem: A. Monocarp's Contest
// Contest: Codeforces - Educational Codeforces Round 194 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2260/problem/A
// Memory Limit: 512 MB
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
	    int c0=0;
	    fori(i,0,n){
	    	cin>>a[i];
	    	if(a[i]==0){
	    		c0++;
	    	}
	    }
	    if(c0<2){
	    	cout<<-1<<endl;
	    	continue;
	    }
	    int res=0;
	    if(a[0]!=0){
	    	res++;
	    }
	    if(a[n-1]!=0){
	    	res++;
	    }
	    cout<<res<<endl;
	    
	}
 
}