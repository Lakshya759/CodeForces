// Problem: C1. Floor of MEX (Easy Version)
// Contest: Codeforces - Codeforces Round 1120 (Div. 2)
// URL: https://codeforces.com/contest/2263/problem/C1
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
	    vector<int> p(n,0);
	    
	    fori(i,0,n){
	    	int k=i+1;
	    	// cout<<a[i]*k<<" ";
	    	if((a[i]*k)<=(n-1)){
	    		p[a[i]*k]++;
	    	}
	    	if(((a[i]+1)*(k))<=n-1){
	    		p[(a[i]+1)*(k)]--;
	    	}
	    	
	    }
	    // cout<<endl;
	    // for(auto it:p){
	    	// cout<<it<<" ";
	    // }
	    // cout<<endl;
	    vector<int> pref;
	    
	    // cout<<endl;
	    int sum=0;
	    fori(i,0,n){
	    	sum+=p[i];
	    	pref.push_back(sum);
	    }
	    // for(auto it:pref){
	    	// cout<<it<<" ";
	    // }
	    // cout<<endl;
	    vector<int> res;
	    fori(i,0,pref.size()){
	    	if(pref[i]==0){
	    		res.push_back(i);
	    	}
	    	
	    }
	    cout<<res.size()<<endl;
	    fori(i,0,res.size()){
	    	cout<<res[i]<<" ";
	    }
	    cout<<endl;
	    
	}
 
}