// Problem: B. Minus Two
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/B
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
	    v(a,n);
	    map<int,int> mp;
	    int odd=0;
	    int e1=0,e2=0;
	    fori(i,0,n){
	    	cin>>a[i];
	    	mp[a[i]]++;
	    	if(a[i]%2!=0){
	    		odd++;
	    	}
	    	if(a[i]%4==0){
	    		e1++;
	    	}
	    	if(a[i]%4==2){
	    		e2++;
	    	}
	    }
	    int maxi=INT_MIN;
	    for(auto it:mp){
	    	maxi=max(maxi,it.second);
	    }
	    maxi=max(maxi,odd);
	    maxi=max(maxi,e1);
	    maxi=max(maxi,e2);
	    cout<<maxi<<endl;
	    
	    
	   
	    
	}
 
}