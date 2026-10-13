// Problem: A. Rank Subsequence
// Contest: Codeforces - Codeforces Round 1112 (Div. 1)
// URL: https://codeforces.com/contest/2249/problem/A
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
bool check(int m,vector<vector<int>> &a){
	int n=a.size();
	int ind=1;
	
	fori(i,0,n){
		int x=ind;
		int y=m-ind+1;
		if(ind>m){
			break;
		}
		int l=a[i][0],r=a[i][1],u=a[i][2],v=a[i][3];
		
		if((x>=l && x<=r) || (y>=u && y<=v)){
			continue;
		}
		ind++;
	}
	if(ind>m){
		return true;
	}
	else{
		return false;
	}
	
}
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n;
	    cin>>n;
	    vector<vector<int>> a;
	    fori(i,0,n){
	    	int e,b,c,d;
	    	cin>>e>>b>>c>>d;
	    	a.push_back({e,b,c,d});
	    }
	    int temp=n;
	    int ans=0;
	    while(temp>0){
	    	if(check(temp,a)){
	    		ans=max(ans,temp);
	    		
	    	}
	    	temp--;
	    }
	    cout<<ans<<endl;
	    
	}
 
}