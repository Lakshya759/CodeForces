// Problem: B. Tape
// Contest: Codeforces - Codeforces Global Round 1
// URL: https://codeforces.com/problemset/problem/1110/B
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
int32_t main() {
	// your code goes here
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> b(n);
	fori(i,0,n){
		cin>>b[i];
	}
	vector<int> diff;
	fori(i,1,n){
		diff.push_back(b[i]-b[i-1]);
	}
	sort(all(diff));
	int x=diff.size();
	
	int sum=0;
	for(int i=0;i<x-k+1;i++){
		
		sum+=diff[i];
	}
	
	sum+=k;
	cout<<sum<<endl;
	
 
}