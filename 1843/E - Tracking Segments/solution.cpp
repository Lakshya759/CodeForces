// Problem: E. Tracking Segments
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1843/E
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
bool check(int n,int mid,vector<int> &b,vector<int>&l,vector<int>&r,int m){
	vector<int> a(n,0);
	for(int i=0;i<mid;i++){
		a[b[i]-1]=1;
		
	}
	vector<int> prefz(n+1),prefo(n+1);
	prefz[0]=0;
	prefo[0]=0;
	
	for(int i=1;i<n+1;i++){
		if(a[i-1]==0){
			prefz[i]=prefz[i-1]+1;
			prefo[i]=prefo[i-1];
		}
		else{
			prefz[i]=prefz[i-1];
			prefo[i]=prefo[i-1]+1;
		}
	}
	for(int i=0;i<m;i++){
		int zero=prefz[r[i]]-prefz[l[i]-1];
		int one=prefo[r[i]]-prefo[l[i]-1];
		if(one>zero){
			return true;
		}
		
	}
	return false;
}
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n,m;
	    cin>>n>>m;
	    vector<int> l(m),r(m);
	    fori(i,0,m){
	    	cin>>l[i]>>r[i];
	    }
	    int q;
	    cin>>q;
	    vector<int> a(q);
	    fori(i,0,q){
	    	cin>>a[i];
	    }
	    
	    int low=1,high=q;
	    int ans=INT_MAX;
	    while(high>=low){
	    	int mid=low+(high-low)/2;
	    	bool flag=check(n,mid,a,l,r,m);
	    	if(flag){
	    		ans=min(ans,mid);
	    		high=mid-1;
	    	}
	    	else{
	    		low=mid+1;
	    	}
	    }
	    if(ans==INT_MAX){
	    	cout<<-1<<endl;
	    }
	    else{
	    	cout<<ans<<endl;
	    }
	    
	}
 
}