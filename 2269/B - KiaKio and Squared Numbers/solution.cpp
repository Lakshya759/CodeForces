// Problem: B. KiaKio and Squared Numbers
// Contest: Codeforces - Codeforces Round 1124 (Div. 2)
// URL: https://codeforces.com/contest/2269/problem/B
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
int fun(int n){
	
	int res=0;
	while(n>0){
		res+=(n%10)*(n%10);
		n=n/10;
	}
	return res;
}
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
	    map<int,int> mp;
	    int res=0;
	    fori(i,0,n){
	    	int y=a[i];
	    	while(y!=1 && y!=89){
	    		y=fun(y);
	    	}
	    	fori(j,i+1,n){
	    		int x=a[j];
		    	int count=0;
		    	while(x!=1 && x!=89){
		    		x=fun(x);
		    		count++;
		    	}
		    	if(x==1 && x==y){
		    		res++;
		    		continue;
		    	}
		    	int temp1=a[i];
		    	int temp2=a[j];
		    	fori(i,0,100){
		    		temp1=fun(temp1);
		    		temp2=fun(temp2);
		    	}
		    	if(temp1==temp2){
		    		res++;
		    	}
	    	}
	    }
	    
	    
	    cout<<res<<endl;
	    
	    
	    
	    
	    
	    
	}
 
}