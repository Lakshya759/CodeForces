// Problem: C. Subset Multiplication
// Contest: Codeforces - EPIC Institute of Technology Round Summer 2025 (Codeforces Round 1036, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/2124/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
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
	    int res=1;
	    ford(i,n-1,1){
	    	if(a[i]%a[i-1]!=0){
	    		int x=a[i-1]/gcd(a[i],a[i-1]);
	    		int y=x/gcd(res,x);
	    		res=res*y;
	    	}
	    }
	    // if(res==INT_MIN){
	    	// cout<<343<<endl;
	    	// continue;
	    // }
	    // cout<<73080/gcd(255780,73080)<<endl;
	    cout<<res<<endl;
	    
	    
	}
 
}