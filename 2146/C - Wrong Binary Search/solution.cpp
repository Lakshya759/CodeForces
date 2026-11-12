// Problem: C. Wrong Binary Search
// Contest: Codeforces - Codeforces Round 1052 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2146/C
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
	    string s;
	    cin>>s;
	    int count=0;
	    bool flag=0;
	    fori(i,0,n){
	    	if(s[i]=='1'){
	    		if(count==1){
	    			flag=1;
	    			break;
	    		}
	    		count=0;
	    	}
	    	else{
	    		count++;
	    	}
	    }
	    if(count==1){
	    	flag=1;
	    }
	    if(flag){
	    	cout<<"NO"<<endl;
	    	continue;
	    }
	    vector<int> ind;
	    vector<int> res;
	    fori(i,0,n){
	    	if(s[i]=='1'){
	    		ind.push_back(i);
	    	}
	    	res.push_back(i+1);
	    }
	    
	    if(ind.size()==n){
	    	cout<<"YES"<<endl;
	    	fori(i,1,n+1){
	    		cout<<i<<" ";
	    	}
	    	cout<<endl;
	    	continue;
	    }
	    if(ind.size()==0){
	    	cout<<"YES"<<endl;
	    	ford(i,n,1){
	    		
	    		cout<<i<<" ";
	    		
	    	}
	    	cout<<endl;
	    	continue;
	    }
	    int m=ind.size();
	    
	    fori(i,0,m-1){
	    	int j=ind[i]+1;
	    	int k=ind[i+1]-1;
	    	while(j<k){
	    		swap(res[j],res[k]);
	    		j++;
	    		k--;
	    	}
	    }
	    if(ind[0]>0){
	    	
	    	int temp=ind[0];
	    	fori(i,0,ind[0]){
	    		res[i]=temp;
	    		temp--;
	    	}
	    }
	    if(ind[m-1]<n-1){
	    	
	    	int temp=ind[m-1]+2;
	    	ford(i,n-1,ind[m-1]+1){
	    		res[i]=temp;
	    		temp++;
	    	}
	    }
	    cout<<"YES"<<endl;
	    fori(i,0,n){
	    	cout<<res[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	    
	    
	}
 
}