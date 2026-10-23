// Problem: C. Unrequited Love
// Contest: Codeforces - Codeforces Round 1125 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2275/C
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
	    vector<int> e,o;
	    map<int,int> mp1;
	    fori(i,0,n-4){
	    	int res=a[i]+a[i+2]-a[i+4];
	    	if(i%2==0){
	    		e.push_back(res);
	    	}
	    	else{
	    		o.push_back(res);
	    		mp1[res]++;
	    	}
	    }
	    // AAAA
	    map<int,int> mp2;
	    int res=0;
	    bool flag=0;
	    ford(i,e.size()-1,3){
	    	// cout<<"adf"<<endl;
	    	flag=1;
	    	mp2[e[i]]++;
	    	res+=mp2[e[i-3]];
	    }
	    
	    fori(i,0,e.size()){
	    	res+=mp1[e[i]];
	    }
	   
	  
	    map<int,int> mp3;
	    ford(i,o.size()-1,3){
	    	mp3[o[i]]++;
	    	res+=mp3[o[i-3]];
	    }
	    cout<<res<<endl;
	    
	    
	}
 
}