// Problem: C. Decreasing String
// Contest: Codeforces - Educational Codeforces Round 156 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1886/C
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
	    string s;
	    cin>>s;
	    int x;
	    cin>>x;
	    int n=s.size();
	    vector<pair<char,int>> p;
	    for(int i=0;i<n;i++){
	    	p.push_back({s[i],i});
	    }
	    sort(all(p));
	    int count=0;
	    int temp=n;
	    for(int i=0;i<n;i++){
	    	if(temp>=x){
	    		break;
	    	}
	    	temp+=n-i-1;
	    	count++;
	    }
	    temp-=n-count;
	    int ind=x-temp;
	    string s1;
	    
	    for(char c:s){
	    	while(count>0 && !s1.empty() && s1.back()>c){
	    		s1.pop_back();
	    		count--;
	    	}
	    	s1.push_back(c);
	    }
	    while(count>0){
	    	s1.pop_back();
	    	count--;
	    }
	    
	    
	    
	    // cout<<s1<<endl;
	    cout<<s1[ind-1];
	    
	    
	    
	    
	    
	    
	}
 
}