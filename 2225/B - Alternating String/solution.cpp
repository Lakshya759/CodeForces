// Problem: B. Alternating String
// Contest: Codeforces - Educational Codeforces Round 189 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2225/problem/B
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
	    string s;
	    cin>>s;
	    int n=s.length();
	    int count=0;
	    vector<int> ind;
	    for(int i=0;i<n-1;i++){
	    	if(s[i]==s[i+1]){
	    		count++;
	    		if(count==1){
	    			ind.push_back(i+1);
	    		}
	    		else{
	    			ind.push_back(i);
	    		}
	    	}
	    }
	    if(count>2){
	    	cout<<"NO"<<endl;
	    	continue;
	    }
	    cout<<"YES"<<endl;
	    // if(count==1 || count==0){
	    	// cout<<"YES"<<endl;
	    	// continue;
	    // }
	    // if(s[ind[0]]==s[ind[1]]){
	    	// cout<<"YES"<<endl;
	    // }
	    // else{
	    	// cout<<"NO"<<endl;
	    // }
	    
	    
	    
	}
 
}