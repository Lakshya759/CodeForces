// Problem: C. Partitioning the Array
// Contest: Codeforces - Codeforces Round 919 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1920/C
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
vector<int> divisor(int n){
	vector<int> res;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			res.push_back(i);
			if(i*i!=n){
				res.push_back(n/i);
			}
		}
	}
	return res;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
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
	    
	    vector<int> divi=divisor(n);
	    // for(auto it:divi){
	    	// cout<<it<<" ";
	    // }
	    // cout<<"end"<<endl;
	    int m=divi.size();
	    int count=0;
	    fori(i,0,m){
	    	int x=divi[i];
	    	int g=0;
	    	for(int j=0;j<x;j++){
	    		for(int temp=j+x;temp<n;temp+=x){
	    			g=gcd(g,abs(a[temp]-a[temp-x]));
	    		}
	    		
	    	}
	    	if(g>1||g==0){
	    		count++;
	    	}
	    }
	    cout<<count<<endl;
	    
	}
 
}