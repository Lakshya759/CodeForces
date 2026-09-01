// Problem: E. Good Triples
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1907/E
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
	    int n;
	    cin>>n;
	   int res=1;
	    
	    while(n>0){
	    	int x=n%10;
	    	res*=((x+1)*(x+2))/2;
	    	n/=10;
	    }
	    cout<<res<<endl;
	}
 
}