// Problem: B. Monocarp and Projects
// Contest: Codeforces - Educational Codeforces Round 194 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2260/problem/B
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
	    int x,y,k;
	    cin>>x>>y>>k;
	    int count=0;
	    int res=0;
	    while(count<k && y%x!=(y-x)){
	    	res+=y%x;
	    	count++;
	    	x++;
	    	y++;
	    }
	   
	    // cout<<count<<endl;
	    if(count<k){
	    	res+=(y-x)*(k-count);
	    }
	    cout<<res<<endl;
	    // while(k--){
	    	// cout<<y%x<<" ";
	    	// x++;
	    	// y++;
	    // }
	    // cout<<endl;
	    
	    
	    
	}
 
}