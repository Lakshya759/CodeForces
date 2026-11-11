// Problem: B. Introduction to the Niche Internet
// Contest: Codeforces - Codeforces Round 1132 (Div. 2)
// URL: https://codeforces.com/contest/2284/problem/B
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
	    int n,k;
	    cin>>n>>k;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    sort(all(a));
	    int res=n-k;
	    vector<int> b;
	    fori(i,res,n){
	    	b.push_back(a[i]);
	    }
	    ford(i,res-1,0){
	    	b.push_back(a[i]);
	    }
	    int sum=b[0];
	    int count=0;
	    fori(i,1,n){
	    	float avg=float(sum)/float(i);
	    	if(avg<=float(b[i])){
	    		// cout<<avg<<" ";
	    		count++;
	    	}
	    	sum+=b[i];
	    }
	    // cout<<endl;
	    // for(auto it:b){
		    	// cout<<it<<" ";
		    // }
		    // cout<<endl;
	    // cout<<count<<endl;
	    if(count==k-1){
	    	cout<<"YES"<<endl;
		    for(auto it:b){
		    	cout<<it<<" ";
		    }
		    cout<<endl;
	    }
	    else{
	    	cout<<"NO"<<endl;
	    }
	    
	    
	    
	    
	}
 
}