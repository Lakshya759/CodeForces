// Problem: A2. 15K4JR3B (Hard Version)
// Contest: Codeforces - Codeforces Round 1132 (Div. 2)
// URL: https://codeforces.com/contest/2284/problem/A2
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
// void dp(int ind, vector<int> &a,int sum,vector<int> &res){
	// if(ind>=a.size()){
		// res.push_back(pick);
		// res.push_back(not_pick);
	// }
	// int pick=1<<a[ind]+ dp(ind+1,a,sum,res);
	// int not_pick=dp(ind+1,a,sum,res);
// 	
// 	
// 	
// }
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    /*
	    12=6*6
	    7*5
	    8*4
	    9*3
	    10*2
	    
	    area=height * base;
	    we need to maximize this thing
	    we know height+base
	    how to maximize it??
	    
	    
	    */
	    int n;
	    cin>>n;
	    v(a,n);
	    int x=0,y=0;
	    fori(i,0,n){
	    	cin>>a[i];
	    	
	    }
	    sort(all(a));
	    
	    ford(i,n-1,0){
	    	if(y+a[i]<=x){
	    		y+=(1<<a[i]);
	    	}
	    	else{
	    		x+=(1<<a[i]);
	    	}
	    }
	    cout<<x*y<<endl;
	    
	}
 
}