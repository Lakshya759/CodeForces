// Problem: C. Dungeon
// Contest: Codeforces - Codeforces Global Round 30 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/2164/C
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
	    int n,m;
	    cin>>n>>m;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    v(b,m);
	    v(c,m);
	    fori(i,0,m){cin>>b[i];}
	    fori(i,0,m){cin>>c[i];}
	    vector<pair<int,int>> p;
	    vector<int> zero;
	    fori(i,0,m){
	    	if(c[i]!=0){
	    		p.push_back({b[i],c[i]});
	    	}
	    	else{
	    		zero.push_back(b[i]);
	    	}
	    	
	    	
	    }
	    sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
		    if (a.first != b.first) return a.first < b.first;
		    return a.second > b.second;
		});   
	    priority_queue<int , vector<int>, greater<int>> pq;
	    fori(i,0,n){
	    	pq.push(a[i]);
	    }
	    int count=0;
	    vector<int> temp;
	    fori(i,0,p.size()){
	    	while(!pq.empty() && pq.top()<p[i].first){
	    		temp.push_back(pq.top());
	    		pq.pop();
	    	}
	    	if(pq.empty()){
	    		break;
	    	}
	    	int x=pq.top();
	    	pq.pop();
	    	pq.push(max(x,p[i].second));
	    	p[i].first=INT_MAX;
	    	count++;
	    	
	    }
	    for(auto it:temp){
	    	pq.push(it);
	    }
	    sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
		    if (a.first != b.first) return a.first < b.first;
		    return a.second > b.second;
		}); 
		
	    vector<int> temp1;
	    fori(i,0,p.size()){
	    	while(!pq.empty() && pq.top()<p[i].first){
	    		temp1.push_back(pq.top());
	    		pq.pop();
	    	}
	    	if(pq.empty()){
	    		break;
	    	}
	    	int x=pq.top();
	    	pq.pop();
	    	pq.push(max(x,p[i].second));
	    	count++;
	    	
	    }
	    for(auto it:temp1){
	    	pq.push(it);
	    }
	    
	    sort(all(zero));
	    
	    for(int i=0;i<zero.size();i++){
	    	while(!pq.empty() && pq.top()<zero[i]){
	    		pq.pop();
	    	}
	    	if(pq.empty()){
	    		break;
	    	}
	    	count++;
	    	pq.pop();
	    }
	    
		// for(auto it:a){
			// cout<<it<<" ";
		// }
		// cout<<endl;
		cout<<count<<endl;
		
		
		
		
	    
	    
	    
	    
	    
	    
	}
 
}