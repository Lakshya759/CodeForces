// Problem: C. A Good Problem
// Contest: Codeforces - Codeforces Round 1035 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2119/C
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
	    int n,l,r,k;
	    cin>>n>>l>>r>>k;
	    if(n==1){
	    	cout<<l<<endl;
	    	continue;
	    }
	    if(n==2){
	    	cout<<-1<<endl;
	    	continue;
	    }
	    if(n%2!=0){
	    	cout<<l<<endl;
	    	continue;
	    }
	    int nxt=1;
	    int cnt=0;
	    while(nxt<=l){
	    	cnt++;
	    	// cout<<nxt<<" ";
	    	nxt=1LL<<cnt;
	    }
	    if(nxt>r){
	    	cout<<-1<<endl;
	    	continue;
	    }
	    
    	if(k<=(n-2)){
    		cout<<l<<endl;
    		continue;
    	}
    	else{
    		cout<<nxt<<endl;
    		continue;
    	}
	    
	    
	    
	    
	}
 
}