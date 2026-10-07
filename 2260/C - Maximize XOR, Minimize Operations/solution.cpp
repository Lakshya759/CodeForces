// Problem: C. Maximize XOR, Minimize Operations
// Contest: Codeforces - Educational Codeforces Round 194 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/2260/C
// Memory Limit: 512 MB
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
string fun(int n){
	string s="";
	while(n>0){
		if(n%2==0){
			s+='0';
		}
		else{
			s+='1';
		}
		n=n/2;
	}
	
	return s;
}
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int x,y;
	    cin>>x>>y;
	    int s=x+y;
	    for(int i=29;i>=0;i--){
	    	int val=1<<i;
	    	if(((s&val)!=0) && (x>=val)){
	    		x-=val;
	    	}
	    }
	    cout<<s<<" "<<x<<endl;
	    
	   
	    
	    // cout<<temp<<endl;
	    // cout<<res<<" "<<cnt<<endl;
	    
	}
 
}