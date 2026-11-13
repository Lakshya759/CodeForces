// Problem: C. Quotient and Remainder
// Contest: Codeforces - Educational Codeforces Round 185 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/2170/C
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
	    int n,k;
	    cin>>n>>k;
	    v(q,n);
	    v(r,n);
	    fori(i,0,n){cin>>q[i];}
	    fori(i,0,n){cin>>r[i];}
	    sort(all(q));
	    sort(all(r));
	    int i=0,j=n-1;
	    int count=0;
	    while(i<n && j>=0){
	    	int y=r[j]+1;
	    	int x=(q[i]*y)+r[j];
	    	if(y<=k && x<=k){
	    		count++;
	    		i++;
	    		j--;
	    		continue;
	    	}
	    	j--;
	    }
	    
	    // fori(i,0,n){
	    	// int y=r[i]+1;
	    	// int x=(q[i]*y)+r[i];
	    	// if(y<=k && x<=k){
	    		// count++;
	    	// }
// 	    	
	    // }
	    cout<<count<<endl;
	    
	}
 
}