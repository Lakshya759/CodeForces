// Problem: C. Monocarp's String
// Contest: Codeforces - Educational Codeforces Round 183 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/2145/C
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
	    vector<int> a;
	    int sum1=0;
	    fori(i,0,n){
	    	if(s[i]=='a'){
	    		a.push_back(1);
	    	}
	    	else{
	    		a.push_back(-1);
	    	}
	    	sum1+=a[i];
	    }
	    if(sum1==0){
	    	cout<<0<<endl;
	    	continue;
	    }
	    vector<int> pref;
	    pref.push_back(0);
	    int temp=0;
	    fori(i,0,n){
	    	temp+=a[i];
	    	pref.push_back(temp);
	    }
	    
	    map<int,int> mp;
	    int res=INT_MAX;
	    fori(i,0,n+1){
	    	int req=pref[i]-sum1;
	    	if(mp.find(req)!=mp.end()){
	    		res=min(res,i-mp[req]);
	    	}
	    	mp[pref[i]]=i;
	    	
	    }
	    if(res==n){
	    	cout<<-1<<endl;
	    	continue;
	    }
	    cout<<res<<endl;
	    
	}
 
}