// Problem: C. Range Operation
// Contest: Codeforces - Educational Codeforces Round 184 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/2169/C
// Memory Limit: 512 MB
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
	    v(a,n);
	    int sum=0;
	    fori(i,0,n){cin>>a[i];sum+=a[i];}
	    vector<int> pref(n+1);
	    pref[0]=0;
	    fori(i,0,n){
	    	pref[i+1]=pref[i]+a[i];
	    }
	    set<int> x;
	    x.insert(0);
	    int p=0;
	    fori(i,1,n+1){
	    	int y=(i*i)+i-pref[i];
	    	int z=*x.begin();
	    	p=max(p,y-z);
	    	x.insert(y);
	    	
	    }
	    
	    
	    int ans=sum+p;
	    // fori(i,0,n+1){
    		// if(i+mid>n){break;}
    		// int s=pref[i+mid]-pref[i];
    		// int p=((i+1)+(i+mid))*mid;
    		// int temp=sum-s+p;
    		// res=max(res,temp);
    	// }
    	// ford(j,n,0){
    		// int res=sum;
	    	// fori(i,0,n+1){
	    		// if(i+j>n){break;}
	    		// int s=pref[i+j]-pref[i];
	    		// int p=((i+1)+(i+j))*j;
	    		// int temp=sum-s+p;
	    		// res=max(res,temp);
	    	// }
	    	// if(res>=ans){
	    		// ans=max(ans,res);
// 	    		
	    	// }
// 	    	
    	// }
// 	    
	    
	    
	    // int low=0,high=n;
	    // while(low<=high){
	    	// int mid=low+(high-low)/2;
	    	// int res=sum;
	    	// fori(i,0,n+1){
	    		// if(i+mid>n){break;}
	    		// int s=pref[i+mid]-pref[i];
	    		// int p=((i+1)+(i+mid))*mid;
	    		// int temp=sum-s+p;
	    		// res=max(res,temp);
	    	// }
	    	// if(res>=ans){
	    		// ans=max(ans,res);
	    		// low=mid+1;
	    	// }
	    	// else{
	    		// high=mid-1;
	    	// }
	    // }
	    cout<<ans<<endl;
	    
	}
 
}