// Problem: F. Greetings
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/F
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
 
 
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i].first>>a[i].second;
		}
		sort(a.begin(),a.end());
		ordered_set st;
		long long res=0;
		for(int i=n-1;i>=0;i--){
			int x=st.order_of_key(a[i].second);
			res+=x;
			st.insert(a[i].second);
		}
		cout<<res<<endl;
	}
}