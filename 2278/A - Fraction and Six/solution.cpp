// Problem: A. Fraction and Six
// Contest: Codeforces - Codeforces Round 1131 (Div. 3)
// URL: https://codeforces.com/contest/2278/problem/A
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
	    string a,b;
	    cin>>a>>b;
	    if((n-m)!=3){
	    	
	    	cout<<"NO"<<endl;
	    	continue;
	    }
	    map<char,int> mp;
	    for(auto it:a){
	    	mp[it]++;
	    }
	    bool flag=1;
	    for(auto it:b){
	    	if(mp.find(it)==mp.end() || mp[it]==0){
	    		flag=0;
	    		break;
	    	}
	    	mp[it]--;
	    }
	   
	    
	    for(auto it:mp){
	    	if((it.first=='s' || it.first=='i' || it.first=='x')){
	    		if(it.second>1){
	    			flag=0;
	    		}
	    	}
	    	else{
	    		if(it.second>0){
	    			flag=0;
	    		}
	    		
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