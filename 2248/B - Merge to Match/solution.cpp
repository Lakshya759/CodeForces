// Problem: B. Merge to Match
// Contest: Codeforces - Codeforces Round 1113 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2248/B
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
	    vector<int> a(n),b(m);
	    for(int i=0;i<n;i++){
	    	cin>>a[i];
	    }
	    for(int i=0;i<m;i++){
	    	cin>>b[i];
	    }
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    if(m*2>n || a[0]>b[0]){
	    	cout<<"NO"<<endl;
	    	continue;
	    }
	    bool flag=1;
	    for(int i=0;i<m;i++){
	    	if(a[i]>b[i]){
	    		flag=0;
	    		break;
	    	}
	    }
	    for(int i=n-1;i>=n-m;i--){
	    	if(a[i]<b[i-n+m]){
	    		flag=0;
	    		break;
	    	}
	    }
	    if(flag){
	    	cout<<"YES"<<endl;
	    }
	    else{
	    	cout<<"NO"<<endl;
	    }
	    
	    
	    
	}
 
}