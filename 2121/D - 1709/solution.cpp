// Problem: D. 1709
// Contest: Codeforces - Codeforces Round 1032 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2121/D
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
	    v(a,n);
	    v(b,n);
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    fori(i,0,n){
	    	cin>>b[i];
	    }
	    vector<vector<int>> res;
	    fori(i,0,n){
	    	fori(j,0,n-1){
	    		if(a[j]>a[j+1]){
	    			swap(a[j],a[j+1]);
	    			res.push_back({1,j+1});
	    		}
	    	}
	    }
	    
	    fori(i,0,n){
	    	fori(j,0,n-1){
	    		if(b[j]>b[j+1]){
	    			swap(b[j],b[j+1]);
	    			res.push_back({2,j+1});
	    		}
	    	}
	    }
	    fori(i,0,n){
	    	if(a[i]>b[i]){
	    		swap(a[i],b[i]);
	    		res.push_back({3,i+1});
	    	}
	    }
	    // int i=0;
	    // while(i<n){
    		// if(a[i]<=n){
    			// i++;
    			// continue;
    		// }	
    		// int temp=i;
    		// while(b[temp]>n){
    			// swap(a[temp],a[temp+1]);
    			// res.push_back({1,temp+1});
    			// temp++;
    		// }
    		// swap(a[temp],b[temp]);
    		// res.push_back({3,temp+1});
	    // }
	    
	    
	    // i=0;
	    // while(i<n){
	    	// if(i<(a[i]-1)%n){
	    		// int temp=i;
	    		// while((a[temp]-1)%n!=temp){
	    			// swap(a[temp],a[temp+1]);
	    			// res.push_back({1,temp+1});
	    			// temp++;
	    		// }
	    	// }
	    	// else{
	    		// i++;
// 	    		
	    	// }
	    // }
	    // i=0;
	    // while(i<n){
	    	// if(i<(b[i]-1)%n){
	    		// int temp=i;
	    		// while((b[temp]-1)%n!=temp){
	    			// swap(b[temp],b[temp+1]);
	    			// res.push_back({2,temp+1});
	    			// temp++;
	    		// }
	    	// }
	    	// else{
	    		// i++;
	    	// }
	    // }
	    // fori(i,0,n){
	    	// if(a[i]!=(i+1)){
	    		// res.push_back({3,i+1});
	    	// }
	    // }
	    cout<<res.size()<<endl;
	    for(auto it:res){
	    	cout<<it[0]<<" "<<it[1]<<endl;
	    }
	    
	    
	    
	}
 
}