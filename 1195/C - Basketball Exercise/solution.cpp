// Problem: C. Basketball Exercise
// Contest: Codeforces - Codeforces Round 574 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1195/C
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
int solve(int ind,vector<int> &a,vector<int>&b,int prev , vector<vector<int>> &dp){
	if(ind==a.size())return 0;
	if(dp[ind][prev]!=-1)return dp[ind][prev];
	int take=INT_MIN;
	if(prev==1){
		take=a[ind]+solve(ind+1,a,b,0,dp);
	}
	else{
		take=b[ind]+solve(ind+1,a,b,1,dp);
	}
	int not_take=solve(ind+1,a,b,prev,dp);
	return dp[ind][prev]=max(take,not_take);
	
}
int32_t main() {
	// your code goes here
	int n;
	cin>>n;
	v(a,n);
	v(b,n);
	fori(i,0,n){
		cin>>a[i];
	}
	fori(i,0,n){
		cin>>b[i];
	}
	vector<vector<int>> dp1(n,vector<int>(2,-1));
	vector<vector<int>> dp2(n,vector<int>(2,-1));
	int res1=solve(0,a,b,1,dp1);
	int res2=solve(0,a,b,0,dp2);
	cout<<max(res1,res2);
	
 
}