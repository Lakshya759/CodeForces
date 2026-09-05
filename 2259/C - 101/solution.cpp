// Problem: C. 101
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/C
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
	    fori(i,0,n){
	    	cin>>a[i];
	    	
	    }
	    
	    ford(i,n,0){
	    	if(a[i]==1){
	    		break;
	    	}
	    	if(a[i]==-1){
	    		a[i]=1;
	    		break;
	    	}
	    }
	    bool flag=1;
	    fori(i,0,n){
	    	if(a[i]==1){
	    		flag=0;
	    	}
	    	if(a[i]==-1 ){
	    		if(flag){
	    			a[i]=1;
	    			flag=0;
	    		}
	    		else{
	    			a[i]=0;
	    		}
	    	}
	    	
	    }
	    fori(i,0,n){
	    	cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    // int count=0;
	    // int res=0;
	    // fori(i,0,n){
	    	// if(a[i]==0){
	    		// count++;
	    	// }
	    	// else{
	    		// count++;
	    		// res=max(res,count);
	    	// }
	    // }
	    // cout<<res<<endl;
	    
	}
 
}