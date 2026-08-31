// Problem: E. Block Sequence
// Contest: Codeforces - Codeforces Round 903 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1881/E
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
int solve(int ind,vector<int> &a,vector<int> &dp){
	int n=a.size();
	if(ind>=n)return 0;
	if(dp[ind]!=-1){return dp[ind];}
	int del=1+solve(ind+1,a,dp);
	int open=INT_MAX;
	if((ind+a[ind])<n){
		open=solve(ind+a[ind]+1,a,dp);
	} 
	return dp[ind]=min(del,open);
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
	    vector<int> dp(n+1,-1);
	    int res=solve(0,a,dp);
	    
	    cout<<res<<endl;
	    
	    
	}
 
}