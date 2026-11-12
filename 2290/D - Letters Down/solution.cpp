// Problem: D. Letters Down
// Contest: Codeforces - Codeforces Round 1134 (Div. 4)
// URL: https://codeforces.com/contest/2290/problem/D
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
	    string s;
	    cin>>s;
	    
	    vector<pair<char,char>> p;
	    fori(i,0,n){
	    	if(s[i]!=s[n-i-1]){
	    		p.push_back({min(s[i],s[n-i-1]),max(s[i],s[n-i-1])});
	    	}
	    }
	    if(p.size()==0){
	    	cout<<0<<endl;
	    	continue;
	    }
	    
	    sort(all(p));
	    
	    vector<pair<char,char>> q;
	    q.push_back(p[0]);
	    fori(i,1,p.size()){
	    	if(p[i]!=p[i-1]){
	    		q.push_back(p[i]);
	    	}
	    }
	    
	    
	    int res=0;
	    char maxi=q[0].second;
	    char mini=q[0].first;
	    bool flag=0;
	    bool flag1=0;
	    fori(i,1,q.size()){
	    	
	    	if(q[i].first<=maxi){
	    		maxi=max(maxi,q[i].second);
	    	}
	    	else{
	    		if(i==1){
	    			flag1=1;
	    		}
	    		if(i==q.size()-1){
	    			flag=1;
	    		}
	    		res=res+(maxi-mini);
	    		mini=q[i].first;
	    		maxi=q[i].second;
	    	}
	    	
	    }
	    // cout<<maxi<<mini<<endl;
	    // if(flag1){
	    	// res+=q[0].second-q[0].first;
	    // }
	    // if(!flag){
	    	// res+=maxi-mini;
	    // }
	    res+=maxi-mini;
	    
	    
	    cout<<res<<endl;
	    
	    
	}
 
}