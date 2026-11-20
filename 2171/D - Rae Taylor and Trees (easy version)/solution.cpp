// Problem: D. Rae Taylor and Trees (easy version)
// Contest: Codeforces - Codeforces Round 1065 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2171/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
	    // enter the code
	    int n;
	    cin>>n;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    
	    vector<int> n_great(n,n);
	    int ind=n-1;
	    ford(i,n-1,0){
	    	if(a[i]>a[ind]){
	    		ind=i;
	    		
	    	}
	    	n_great[i]=ind;
	    }
	    
	    vector<int> n_small(n,-1);
	    ind=0;
	    fori(i,0,n){
	    	if(a[i]<a[ind]){
	    		ind=i;
	    		// continue;
	    	}
	    	n_small[i]=ind;
	    }
	    
	    vector<int> great;
	    bool flag=1;
	    fori(i,1,n){
	    	if(a[n_small[i-1]]>a[n_great[i]]){
	    		flag=0;
	    		break;
	    	}
	    }
	    if(!flag){
	    	cout<<"No"<<endl;
	    	continue;
	    }
	    cout<<"Yes"<<endl;
	    
	    
	}
 
}