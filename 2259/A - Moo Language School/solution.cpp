// Problem: A. Moo Language School
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/A
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
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<n;i++){
	    	// cout<<i<<" ";
	    	bool flag=0;
	    	for(int j=0;j<k;j++){
	    		if(s[i+j]=='0'){
	    			flag=1;
	    			break;
	    		}
	    	}
	    	if(!flag){
	    		count++;
	    	}
	    	i=i+k-1;
	    	
	    }
	    cout<<count<<endl;
	    
	}
 
}