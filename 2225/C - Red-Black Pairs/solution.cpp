// Problem: C. Red-Black Pairs
// Contest: Codeforces - Educational Codeforces Round 189 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2225/problem/C
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
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	   
	    int count=0;
	    int i;
	    for(i=0;i<n;i++){
	    	if(a[i]!=b[i]){
	    		if(a[i]==a[i+1]){
	    			if(b[i]!=b[i+1]){
	    				count++;
	    			}
	    			i++;
	    			
	    		}
	    		else{
	    			count++;
	    			
	    		}
	    	}
	    	
	    	
	    }
	   
	    
	    if(i==n-1){
	    	if(a[n-1]!=b[n-1]){
	    		count++;
	    	}
	    }
	    cout<<count<<endl;
	}
 
}