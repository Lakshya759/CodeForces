// Problem: C. Books on a Shelf
// Contest: Codeforces - Codeforces Round 1134 (Div. 4)
// URL: https://codeforces.com/contest/2290/problem/C
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
	    fori(i,0,n){
	    	cin>>a[i];
	    	mp[a[i]]++;
	    }
	    sort(all(a));
	    
	    vector<int> res;
	    int count=0;
	    for(auto it:mp){
	    	count++;
	    	res.push_back(it.first);
	    	mp[it.first]--;
	    }
	    vector<int> temp;
	    
	    for(auto it:mp){
	    	bool flag=1;
	    	fori(i,0,it.second){
	    		if(flag){
	    			count++;
	    			flag=0;
	    		}
	    		temp.push_back(it.first);
	    	}
	    }
	    reverse(all(temp));
	    for(auto it:temp){
	    	res.push_back(it);
	    }
	    cout<<count<<endl;
	    for(auto it:res){
	    	cout<<it<<" ";
	    }
	    cout<<endl;
	    
	    
	}
 
}