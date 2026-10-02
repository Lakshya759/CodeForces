// Problem: A. K Is Important
// Contest: Codeforces - Codeforces Round 1124 (Div. 1)
// URL: https://codeforces.com/problemset/problem/2268/A
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
	    int n,k;
	    cin>>n>>k;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    int i=k-1,j=n-k;
	    int res=0;
	    vector<int> vis(n,0);
	    while(i<j){
	    	if(a[i]>a[j]){
	    		res+=a[i];
	    		vis[i]=1;
	    		
	    		i++;
	    	}
	    	else{
	    		res+=a[j];
	    		vis[j]=1;
	    		
	    		j--;
	    	}
	    	
	    }
	    while(i<n && j>=0){
	    	if(a[i]>a[j]){
	    		res+=a[i];
	    		vis[i]=1;
	    	}
	    	else{
	    		res+=a[j];
	    		vis[j]=1;
	    	}
	    	
	    	do{
	    		i++;
	    	}while(vis[i]==1);
	    	do{
	    		j--;
	    	}while(vis[j]==1);
	    	
	    }
	    cout<<res<<endl;
	    
	    
	}
 
}