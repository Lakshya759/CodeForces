// Problem: A. Journey Planning
// Contest: Codeforces - Codeforces Round 625 (Div. 1, based on Technocup 2020 Final Round)
// URL: https://codeforces.com/problemset/problem/1320/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<pair<int,int>> p;
	for(int i=0;i<n;i++){
		cin>>a[i];
		p.push_back({a[i]-i-1,i+1});
	}
	sort(p.begin(),p.end());
	long long maxi=a[p[0].second-1];
	long long sum=a[p[0].second-1];
	for(int i=1;i<n;i++){
		if(p[i].first==p[i-1].first){
			sum+=a[p[i].second-1];
		}
		else{
			sum=a[p[i].second-1];
		}
		
		
		maxi=max(maxi,sum);
	}
	cout<<maxi<<endl;
	
}