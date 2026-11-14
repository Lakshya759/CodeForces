// Problem: A. Cyclic Merging
// Contest: Codeforces - Codeforces Round 1064 (Div. 1)
// URL: https://codeforces.com/problemset/problem/2165/A
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
	    list<int> ls;
	    vector<list<int>::iterator> w(n);
	    //inserting values in the array and index in the doubly linked list
	    //and the value of iterator of index i in vector of iterator so that 
	    //we don't have to query the list for the value at each index
	    fori(i,0,n){
	    	cin>>a[i];
	    	w[i]=ls.insert(ls.end(),i);
	    }
	    
	    auto getNxt=[&](auto it){
	    	auto nxt=next(it);
	    	return nxt==ls.end()?ls.begin():nxt;
	    };
	    
	    auto getPrev=[&](auto it){
	    	return it==ls.begin()?prev(ls.end()):prev(it);
	    };
	    
	    auto hole=[&](auto it){
	    	auto nxt=getNxt(it);
	    	auto prev=getPrev(it);
	    	if(a[*it]<=min(a[*nxt],a[*prev])){
	    		return true;
	    	}
	    	return false;
	    };
	    vector<int> vis(n,0);
	    
	    
	    queue<int> q;
	    
	    for(auto it=ls.begin();it!=ls.end();it++){
	    	if(hole(it)){
	    		q.push(*it);
	    		
	    	}
	    }
	    
	    
	    
	    int ans=0;
	    while(ls.size()>1){
	    	// cout<<"YES"<<endl;
	    	int curr=q.front();
	    	q.pop();
	    	auto it=w[curr];
	    	if(vis[curr]){
	    		continue;
	    	}
	    	
    	  	
	    	vis[curr]=1;
	    	auto nxt=getNxt(it);
	    	auto prev=getPrev(it);
	    	// cout<<*nxt<<endl;
	    	// cout<<"YES"<<endl;
	    	// cout<<a[*nxt]<<" "<<a[*prev]<<endl;
	    	
	    	ans+=min(a[*nxt],a[*prev]);
	    	ls.erase(it);
	    	if(hole(nxt)){
	    		q.push(*nxt);
	    	}
	    	if(hole(prev)){
	    		q.push(*prev);
	    	}
	    	
	    	
	    }
	    cout<<ans<<endl;
	    
	    
	    
	}
 
}