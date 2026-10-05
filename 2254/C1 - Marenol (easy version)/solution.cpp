// Problem: C1. Marenol (easy version)
// Contest: Codeforces - Codeforces Round 1114 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2254/C1
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
	    string a,b;
	    cin>>a>>b;
	    if(a==b){
	    	cout<<"YES"<<endl;
	    	continue;
	    }
	    bool flag=1;
	    int x1=0,x2=0,x3=0,x4=0;
	    for(int i=0;i<n;i++){
	    	if(a[i]=='0'){
	    		if(i%2==0){
	    			x1++;
	    		}
	    		else{
	    			x2++;
	    		}
	    		
	    	}
	    	if(b[i]=='0'){
	    		if(i%2==0){
	    			x3++;
	    		}
	    		else{
	    			x4++;
	    		}
	    		
	    	}
	    }
	    if(x1!=x3 || x2!=x4){
	    	cout<<"NO"<<endl;
	    }
	    else{
	    	cout<<"YES"<<endl;
	    }
	    
	    
	}
 
}