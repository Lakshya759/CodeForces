// Problem: C. Subarrays
// Contest: Codeforces - Educational Codeforces Round 195 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2276/problem/C
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
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n,k;
	    cin>>n>>k;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    int sum=0;
	    map<int,int> mp;
	    vector<int> pref;
	    pref.push_back(0);
	    fori(i,0,n){
	    	sum+=a[i];
	    	pref.push_back(sum%k);
	    }
	    int count=0;
	    ford(i,n,k){
	    	mp[pref[i]]++;
	    	int temp=pref[i-k-1];
	    	count+=mp[temp];
	    }
	    cout<<count<<endl;
	    
	    
	}
 
}