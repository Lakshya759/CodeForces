// Problem: A. Rumb Needs a Hand
// Contest: Codeforces - Codeforces Round 1121 (Div. 2)
// URL: https://codeforces.com/contest/2264/problem/A
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
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    vector<int> b;
	    fori(i,0,n){
	    	if(a[i]!=(i+1)){
	    		b.push_back(a[i]);
	    	}
	    }
	    bool flag=1;
	    fori(i,1,b.size()){
	    	if(b[i]>b[i-1]){
	    		flag=0;
	    		break;
	    	}
	    }
	    if(flag){
	    	cout<<"YES"<<endl;
	    }
	    else{
	    	cout<<"NO"<<endl;
	    }
	    
	}
 
}