// Problem: B. Catching the Krug
// Contest: Codeforces - Squarepoint Challenge (Codeforces Round 1055, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/2152/B
// Memory Limit: 1024 MB
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
	    int n,x1,y1,x2,y2;
	    cin>>n>>x1>>y1>>x2>>y2;
	    //FOR HORIZONTAL
	    //1.Will go on the right
	    int hori=0;
	    if(x1>x2){
	    	hori=n-x1;
	    }
	    //2.Will go on the left
	    else if(x1<x2){
	    	hori=x1;
	    }
	    
	    hori+=abs(x1-x2);
	    // cout<<x1<< " "<<x2<<endl;
	    
	    //FOR VERTICAL
	    //1. will go down
	    int vert=0;
	    if(y1>y2){
	    	vert=n-y1;
	    }
	    //2.Will go up
	    else if(y1<y2){
	    	vert=y1;
	    }
	    vert+=abs(y1-y2);
	    cout<<max(hori,vert)<<endl;
	    
	}
 
}