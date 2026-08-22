// Problem: A. Football
// Contest: Codeforces - Codeforces Beta Round 77 (Div. 2 Only)
// URL: https://codeforces.com/contest/96/problem/A
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
	string s;
	cin>>s;
	int n=s.size();
	int res=1;
	int count=1;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			count++;
			
		}else{
			res=max(res,count);
			count=1;
		}
	}
	res=max(res,count);
	if(res>=7){
		cout<<"YES"<<endl;
		
	}
	else{
		cout<<"NO"<<endl;
	}
 
}