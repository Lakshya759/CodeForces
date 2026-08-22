// Problem: A. Flag
// Contest: Codeforces - Codeforces Beta Round 16 (Div. 2 Only)
// URL: https://codeforces.com/contest/16/problem/A
// Memory Limit: 64 MB
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
	int n,m;
	cin>>n>>m;
	bool res=1;
	
	vector<string> flag(n);
	for(int i=0;i<n;i++){
		cin>>flag[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=1;j<m;j++){
			if(flag[i][j]!=flag[i][j-1]){
				// cout<<flag[i][j]<<" "<<flag[i][j-1]<<endl;
				res=0;
				break;
			}
		}
	}
	for(int i=1;i<n;i++){
		if(flag[i][0]==flag[i-1][0]){
			res=0;
			break;
		}
	}
	if(res){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}