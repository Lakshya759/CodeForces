// Problem: C. News Distribution
// Contest: Codeforces - Educational Codeforces Round 65 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1167/C
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
 
 
class DisjointSet{
	vector<int> size,parent;
public:
	DisjointSet(int n){
		size.resize(n+1,1);
		parent.resize(n+1);
		for(int i=0;i<=n;i++){
			parent[i]=i;
		}
	}
	int findUPar(int node){
		if(node==parent[node])return node;
		return parent[node]= findUPar(parent[node]);
	}
	void unionBySize(int u,int v){
		int ulp_u=findUPar(u);
		int ulp_v=findUPar(v);
		if(ulp_u==ulp_v)return;
		if(size[ulp_u]<size[ulp_v]){
			parent[ulp_u]=ulp_v;
			size[ulp_v]+=size[ulp_u];
		}
		else{
			parent[ulp_v]=ulp_u;
			size[ulp_u]+=size[ulp_v];
		}
	}
	int getSize(int x) {
	    return size[findUPar(x)];
	}
	
};
int32_t main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	DisjointSet ds=DisjointSet(n);
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		vector<int> temp(x);
		fori(j,0,x){
			cin>>temp[j];
		}
		fori(j,1,x){
			ds.unionBySize(temp[j],temp[j-1]);
		}
		
	}
	fori(i,1,n+1){
		cout<<ds.getSize(i)<<" ";
	}
	
	return 0;
	
	
 
}