// Problem: C. To Become Max
// Contest: Codeforces - Codeforces Round 890 (Div. 2) supported by Constructor Institute
// URL: https://codeforces.com/problemset/problem/1856/C
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
bool check(int n,vector<int> &a,int x,int k){
	for(int i=0;i<n;i++){
		int temp=k;
		int least=x;
		for(int j=i;j<n;j++){
			if(a[j]>=least){
				return true;
			}
			temp-=least-a[j];
			least--;
			if(temp<0){
				break;
			}
		}
	}
	return false;
}
int32_t main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    //enter the code
	    int n,k;
	    cin>>n>>k;
	    v(a,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    int maxi=*max_element(all(a));
	    int high=maxi+k,low=maxi;
	    int ans=maxi;
	    while(high>=low){
	    	int mid=low+(high-low)/2;
	    	bool flag=check(n,a,mid,k);
	    	
	    	if(flag){
	    		ans=max(ans,mid);
	    		low=mid+1;
	    	}
	    	else{
	    		high=mid-1;
	    	}
	    	
	    }
	    cout<<ans<<endl;
	    
	    
	}
 
}