// Problem: D. Backrooms Hill
// Contest: Codeforces - Codeforces Round 1123 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2267/D
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
	    fori(i,0,n){
	    	cin>>a[i];
	    }
	    vector<int> v1,v2;
	    fori(i,0,n){
	    	if(i%2==0){
	    		v1.push_back(a[i]);
	    	}
	    	else{
	    		v2.push_back(a[i]);
	    	}
	    }
	    sort(all(v1));
	    sort(all(v2));
	    sort(all(a));
	    // for(auto it:v1){cout<<it<<" ";}
	    // cout<<endl;
	    int i=0,j=0;
	    int na=v1.size();
	    int nb=v2.size();
	    int l=0,r=n-1;
	    bool f=1;
	    fori(k,0,n){
	    	int need=a[k];
	    	bool flag=0;
	    	if(l%2==0 && i<na && v1[i]==need){
	    		i++;
	    		l++;
	    		flag=1;
	    	}
	    	else if(l%2==1 && j<nb && v2[j]==need){
	    		j++;
	    		l++;
	    		flag=1;
	    	}
	    	else if(r%2==0 && i<na && v1[i]==need){
	    		r--;
	    		i++;
	    		flag=1;
	    	}
	    	else if(r%2==1 && j<nb && v2[j]==need){
	    		r--;
	    		j++;
	    		flag=1;
	    	}
	    	if(!flag){f=0;break;}
	    }
	    if(f){
	    	cout<<"YES"<<endl;
	    }
	    else{
	    	cout<<"NO"<<endl;
	    }
	    
	    
	    
	    
	    
	}
 
}