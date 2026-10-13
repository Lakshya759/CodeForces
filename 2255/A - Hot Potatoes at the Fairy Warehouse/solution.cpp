// Problem: A. Hot Potatoes at the Fairy Warehouse
// Contest: Codeforces - Codeforces Round 1116 (Div. 1)
// URL: https://codeforces.com/problemset/problem/2255/A
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
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    n=n+n;
	    int e=0,o=0;
	    fori(i,0,n){
	    	if(s[i]=='1'){
	    		if(i%2==0){
	    			e++;
	    		}
	    		else{
	    			o++;
	    		}
	    	}
	    }
	    fori(i,0,n){
	    	if(s[i]=='1' && s[(i+1)%n]=='0'){
	    		if(i%2==0){
	    			e--;
	    			o++;
	    		}
	    		else{
	    			o--;
	    			e++;
	    		}
	    	}
	    }
	    cout<<o<<" "<<e<<endl;
	    
	}
 
}