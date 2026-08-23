// Problem: C. Sending Messages
// Contest: Codeforces - Codeforces Round 920 (Div. 3)
// URL: https://codeforces.com/contest/1921/problem/C
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
	    int n,f,a,b;
	    cin>>n>>f>>a>>b;
	    v(m,n);
	    fori(i,0,n){
	    	cin>>m[i];
	    }
	    int curr=0;
	    int count=0;
	    for(int i=0;i<n;i++){
	    	
	    	count+=min(((m[i]-curr)*a),b);
	    	curr=m[i];
	    }
	    // cout<<count<<endl;
	    if(count>=f){
	    	cout<<"NO"<<endl;
	    }
	    else{
	    	cout<<"YES"<<endl;
	    }
	    
	}
 
}