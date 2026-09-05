// Problem: D. MEX Multiset
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/D
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
	    int c0=0;
	    fori(i,0,n){
	    	cin>>a[i];
	    	if(a[i]==0){
	    		c0++;
	    	}
	    	
	    }
	    if(c0==1){
	    	cout<<"NO"<<endl;
	    	continue;
	    }
	    if(c0==0){
	    	string s=string(n,'A');
	    	cout<<"YES"<<endl;
	    	cout<<s<<endl;
	    	continue;
	    }
	    cout<<"YES"<<endl;
	    bool flag=0;
	    string s="";
	    fori(i,0,n){
	    	if(a[i]!=0){
	    		s+='C';
	    		continue;
	    	}
	    	if(flag==0){
	    		s+='A';
	    		flag=1;
	    	}
	    	else{
	    		s+='B';
	    	}
	    }
	    cout<<s<<endl;
	    
	    
	    
	    
	}
 
}