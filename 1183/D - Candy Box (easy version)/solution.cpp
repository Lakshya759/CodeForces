// Problem: D. Candy Box (easy version)
// Contest: Codeforces - Codeforces Round 570 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1183/D
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
	    //enter the code
	    int n;
	    cin>>n;
	    v(a,n);
	    map<int,int> mp;
	    fori(i,0,n){
	    	cin>>a[i];
	    	mp[a[i]]++;
	    }
	    vector<int> freq;
	    for(auto it:mp){
	    	freq.push_back(it.second);
	    }
	    sort(all(freq));
	    int m=freq.size();
	    int count=freq[m-1];
	    int res=0;
	    int i=m-1;
	    // while(i>=0){
	    	// if(count==0){
	    		// break;
	    	// }
	    	// if(freq[i]>=count){
	    		// res+=count;
	    		// i--;
	    	// }
	    	// count--;
	    // }
	    for(int i=m-1;i>=0;i--){
	    	if(count==0){
	    		break;
	    	}
	    	if(freq[i]<count){
	    		count=freq[i];
	    	}
	    	
	    	res+=count;
	    	count--;
	    }
	    
	    
	    
	    
	    cout<<res<<endl;
	    
	}
 
}