// Problem: B. Mashmokh and ACM
// Contest: Codeforces - Codeforces Round 240 (Div. 1)
// URL: https://codeforces.com/problemset/problem/414/B
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
long long mod=1000000007;
#define fori(i,a,d) for(int i=a; i<d; i++)
#define ford(i,a,d) for(int i=a; i>=d; i--)
#define v(a,n) vector<int>a(n);
int32_t main() {
	// your code goes here
	
	    //enter the code
	    int n,k;
	    cin>>n>>k;
	    vector<vector<int>> divi(n+1);
	    fori(i,1,n+1){
	    	for(int j=1;j*j<=i;j++){
	    		if(i%j==0){
	    			divi[i].push_back(j);
	    			if(j*j!=i){
		    			divi[i].push_back(i/j);
		    		}
	    		}
	    		
	    	}
	    }
	    vector<vector<int>>dp(k+1,vector<int>(n+1,0));
	    for(int i=1;i<n+1;i++){
	    	dp[1][i]=1;
	    }
	    for(int i=1;i<k+1;i++){
	    	dp[i][1]=1;
	    }
	    
	    
	    // for(auto it:divi){
	    	// for(auto i:it){
	    		// cout<<i<<" ";
	    	// }
	    	// cout<<endl;
	    // }
// 	    
// 	    
	    // cout<<endl;
	    for(int i=2;i<k+1;i++){
	    	for(int j=2;j<n+1;j++){
	    		for(auto it:divi[j]){
	    			dp[i][j]=((dp[i][j]%mod)+(dp[i-1][it]%mod))%mod;
	    		}
	    	}
	    }
	    // fori(i,0,k+1){
	    	// fori(j,0,n+1){
	    		// cout<<dp[i][j]<<" ";
	    	// }
	    	// cout<<endl;
	    // }
	    // cout<<endl;
	    int res=0;
	    for(int i=1;i<n+1;i++){
	    	res=((res%mod)+(dp[k][i]%mod))%mod;
	    }
	    cout<<res<<endl;
	    
	    
	
 
}