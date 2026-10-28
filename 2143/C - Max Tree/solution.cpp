// Problem: C. Max Tree
// Contest: Codeforces - Codeforces Round 1051 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2143/C
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
	    vector<vector<int>> a(n-1);
	    fori(i,0,n-1){
	    	int u,v,x,y;
	    	cin>>u>>v>>x>>y;
	    	a[i].push_back(u);
	    	a[i].push_back(v);
	    	a[i].push_back(x);
	    	a[i].push_back(y);
	    }
	    vector<vector<int>> adj(n+1);
	    fori(i,0,n-1){
	    	int u=a[i][0];
	    	int v=a[i][1];
	    	int x=a[i][2];
	    	int y=a[i][3];
	    	if(x>y){
	    		adj[u].push_back(v);
	    	}
	    	else{
	    		adj[v].push_back(u);
	    	}
	    }
	    vector<int> indegree(n+1,0);
	    fori(i,1,n+1){
	    	for(auto it:adj[i]){
	    		indegree[it]++;
	    	}
	    }
	    queue<int> q;
	    fori(i,1,n+1){
	    	if(indegree[i]==0){
	    		q.push(i);
	    	}
	    }
	    vector<int> topo;
	    while(!q.empty()){
	    	int node=q.front();
	    	q.pop();
	    	topo.push_back(node);
	    	for(auto it:adj[node]){
	    		indegree[it]--;
	    		if(indegree[it]==0){
	    			q.push(it);
	    		}
	    	}
	    }
	    // for(auto it:topo){
	    	// cout<<it<<" ";
	    // }
	    // cout<<endl;
	    
	    vector<int> res(n+1);
	    int temp=n;
	    fori(i,0,n){
	    	res[topo[i]]=temp;
	    	temp--;
	    }
	    
	    fori(i,1,n+1){
	    	cout<<res[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	    
	    // vector<int> res;
	    // fori(i,0,n){
	    	// res.push_back(s[i]+1);
	    // }
	    // for(auto it:res){
	    	// cout<<it<<" ";
	    // }
	    // cout<<endl;
	    
	}
 
}