// Problem: B. Min Matrices
// Contest: Codeforces - Codeforces Round 1120 (Div. 2)
// URL: https://codeforces.com/contest/2263/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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
	    int n,k;
	    cin>>n>>k;
	    if(k<n || k>=2*n){
	    	cout<<-1<<endl;
	    	continue;
	    }
	    vector<vector<int>> res(n,vector<int>(n,0));
	    int down=k-n;
	    int i=0,j=0;
	    int count=1;
	    while(i<n && j<n){
	    	if(down>0){
	    		res[i][j]=count;
	    		count++;
	    		down--;
	    		i++;
	    		continue;
	    	}
	    	res[i][j]=count;
	    	count++;
	    	i++;j++;
	    }
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<n;j++){
	    		if(res[i][j]==0){
	    			res[i][j]=count;
	    			count++;
	    		}
	    	}
	    }
	    fori(i,0,n){
	    	fori(j,0,n){
	    		cout<<res[i][j]<<" ";
	    	}
	    	cout<<endl;
	    }
	    
	    
	}
 
}