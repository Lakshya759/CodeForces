// Problem: C. RemovevomeR
// Contest: Codeforces - Codeforces Round 1107 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2241/C
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
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string a="";
	    for(int i=0;i<n-1;i++){
	    	if(s[i]!=s[i+1]){
	    		a=a+s[i];
	    	}
	    }
	    a+=s[n-1];
	    if(a.size()==2){
	    	cout<<2<<endl;
	    }
	    else{
	    	cout<<1<<endl;
	    }
	    
	}
 
}