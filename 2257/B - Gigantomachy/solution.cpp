// Problem: B. Gigantomachy
// Contest: Codeforces - Codeforces Round 1117 (Div. 2)
// URL: https://codeforces.com/contest/2257/problem/B
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
	    int n,m;
	    cin>>n>>m;
	    v(a,n);
	    v(b,m);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    fori(i,0,m){
	    	cin>>b[i];
	    }
	    int bea=0;
	    fori(i,0,n-1){
	    	bea+=a[i]-a[i+1]+1;
	    }
	    bea+=a[n-1];
	    int ver=0;
	    fori(i,0,m-1){
	    	ver+=b[i]-b[i+1]+1;
	    }
	    ver+=b[m-1];
	    if(bea==ver || bea>ver){
	    	cout<<1<<endl;
	    	continue;
	    }
	    // cout<<bea<<" "<<ver<<endl;
	    cout<<2<<endl;
	    
	    
	}
 
}