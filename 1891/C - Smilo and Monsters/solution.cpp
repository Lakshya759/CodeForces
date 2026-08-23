// Problem: C. Smilo and Monsters
// Contest: Codeforces - Codeforces Round 907 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1891/C
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
	    fori(i,0,n){
	    	cin>>a[i];
	    	sum+=a[i];
	    }
	    sort(rall(a)); 
	    
	    
	    int rem=sum/2;
	    int ans=sum-rem;
	    fori(i,0,n){
	    	if(rem<=0){
	    		break;
	    	}
	    	rem-=a[i];
	    	ans++;
	    }
	    cout<<ans<<endl;
	    
	    
	    
	}
	// vector<int> psum(n);
	    // vector<int> ssum(n);
	    // psum[0]=a[0];
	    // fori(i,1,n){
	    	// psum[i]=psum[i-1]+a[i];
	    // }
	    // ssum[n-1]=a[n-1];
	    // ford(i,n-2,0){
	    	// ssum[i]=ssum[i+1]+a[i];
	    // }
	    // int ind=-1;
	    // int sum=0;
	    // for(int i=0;i<n;i++){
	    	// if(psum[i]<ssum[i]){
// 	    		
	    		// ind=i;
	    		// sum=psum[i];
	    	// }
	    	// else{
	    		// break;
	    	// }
	    // }
	    // int count=sum;
	    // // cout<<ind<<endl;
	    // // cout<<count<<endl;
	    // for(int i=ind+1;i<n;i++){
	    	// if(sum>=a[i]){
	    		// sum-=a[i];
	    		// count++;
	    		// a[i]=0;
	    	// }
	    	// else{
	    		// a[i]-=sum;
// 	    		
	    		// count+=1+(a[i]/2)+(a[i]%2);
	    		// a[i]=0;
	    		// sum=0;
	    		// break;
	    	// }
	    // }
	    // fori(i,ind+1,n){
	    	// if(a[i]!=0){
	    		// if(a[i]==1){
	    			// count+=1;
	    		// }
	    		// else{
	    			// count+=((a[i])/2)+1;
	    		// }
// 	    		
	    	// }
	    // }
	    // cout<<count<<endl;
 
}