// Problem: C. Queen
// Contest: Codeforces - Codeforces Round 549 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1143/C
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
void solve(int node,vector<int> &c,vector<int> &p,vector<int> &vis){
	if(node==-2)return;
	c[node]=0;
	vis[node]=1;
	solve(p[node]-1,c,p,vis);
	
}
int32_t main() {
	// your code goes here
	
	int n;
	cin>>n;
	vector<vector<pair<int,int>>> adj(n+1);
	vector<int> c;
	fori(i,0,n){
		int x,y;
		cin>>x>>y;
		c.push_back(y);
		if(x!=-1){
			adj[x].push_back({i+1,y});
		}
		
	}
	vector<int> temp;
	for(int i=1;i<n+1;i++){
		bool flag=1;
		for(auto p:adj[i]){
			if(p.second==0){
				flag=0;
				break;
			}
		}
		if(c[i-1]==0){
			flag=0;
		}
		if(flag){
			temp.push_back(i);
		}
	}
	sort(all(temp));
	if(temp.size()==0){
		cout<<-1;
	}
	else{
		for(auto it:temp){
			cout<<it<<" ";
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// vector<int> p(n);
	// vector<int> c(n);
	// vector<int> vis(n,0);
	// for(int i=0;i<n;i++){
		// cin>>p[i];
		// cin>>c[i];
	// }
	// for(int i=0;i<n;i++){
		// if(c[i]==0 && vis[i]==0){
			// solve(i,c,p,vis);
		// }
	// }
	// vector<int> temp;
	// for(int i=0;i<n;i++){
		// if(c[i]==1){
			// temp.push_back(i);
		// }
	// }
	// sort(temp.begin(),temp.end());
	// for(auto it:temp){
		// cout<<it+1<<" ";
	// }
	// if(temp.size()==0){
		// cout<<-1<<endl;
	// }
	
	
 
}