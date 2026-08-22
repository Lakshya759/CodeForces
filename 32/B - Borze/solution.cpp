// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round 32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/contest/32/problem/B
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
	string res="";
	for(int i=0;i<n;i++){
		if(s[i]=='.'){
			res.push_back('0');
		}
		else{
			if(s[i+1]=='.'){
				res.push_back('1');
			}
			else{
				res.push_back('2');
			}
			i++;
		} 
	}
	cout<<res<<endl;
 
}