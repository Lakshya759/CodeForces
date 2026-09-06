// Problem: B1. Carrot Chopdown (Easy Version)
// Contest: Codeforces - Codeforces Round 1118 (Div. 2)
// URL: https://codeforces.com/contest/2258/problem/B1
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
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n,m;
	    cin>>n>>m;
	    v(a,n);
	   map<int,int> mp1;
	    fori(i,0,n){
	    	cin>>a[i];
	    	mp1[a[i]]++;
	    }
	    sort(all(a));
	    int ans=n;
	    for(int i=1;i<=m;i++){
	    	int ind=lower_bound(all(a),i)-a.begin();
	    	int res=(n-ind)+mp1[i*2];
	    	ans=max(ans,res);
	    }
	    cout<<ans<<endl;
	    
	    
	    
	    
	    // int res=n;
	    // for(auto it: mp1){
	    	// if(it.first==1){
	    		// res=max(res,it.second);
	    		// continue;
	    	// }
	    	// int temp=it.second;
	    	// if(mp1.find(it.first*2)!=mp1.end()){
	    		// temp+=(mp1[it.first*2]*2);
	    	// }
	    	// if(mp1.find((it.first*2)-1)!=mp1.end()){
	    		// temp+=(mp1[(it.first*2)-1]);
	    	// }
	    	// if(mp1.find((it.first*2)+1)!=mp1.end()){
	    		// temp+=(mp1[(it.first*2)+1]);
	    	// }
	    	// res=max(res,temp);
	    // }
	    // for(auto it:mp1){
	    	// if(it.first%2==0){
	    		// res=max(res,(2*it.second));
	    	// }
	    // }
	    // cout<<res<<endl;
	   
	    
	    
	
	    
	    
	    
	}
 
}