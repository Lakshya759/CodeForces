// Problem: B. Domino Tiles
// Contest: Codeforces - Codeforces Round 1116 (Div. 2)
// URL: https://codeforces.com/contest/2256/problem/B
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
	    string s;
	    cin>>s;
	    string temp=string(n,'?');
	    if(s==temp){
	    	cout<<4<<endl;
	    	continue;
	    }
	    bool flag1=1,flag2=1;
	    fori(i,0,n){
	    	if(s[i]!='?' && i%2==0){
	    		flag1=0;
	    		
	    	}
	    	if(s[i]!='?' && i%2!=0){
	    		flag2=0;
	    		
	    	}
	    	
	    }
	    if(!flag1){
	    	bool f1=1,f2=1;
	    	char x='0';
	    	for(int i=0;i<n;i+=2){
	    		if(s[i]!=x && s[i]!='?'){
	    			f1=0;
	    		}
	    		if(x=='0'){
	    			x='1';
	    		}
	    		else{
	    			x='0';
	    		}
	    	}
	    	x='1';
	    	for(int i=0;i<n;i+=2){
	    		if(s[i]!=x && s[i]!='?'){
	    			f2=0;
	    		}
	    		if(x=='0'){
	    			x='1';
	    		}
	    		else{
	    			x='0';
	    		}
	    	}
	    	if(!(f1||f2)){
	    		cout<<0<<endl;
	    		continue;
	    	}
	    }
	    if(!flag2){
	    	bool f1=1,f2=1;
	    	char x='0';
	    	for(int i=1;i<n;i+=2){
	    		if(s[i]!=x && s[i]!='?'){
	    			f1=0;
	    		}
	    		if(x=='0'){
	    			x='1';
	    		}
	    		else{
	    			x='0';
	    		}
	    	}
	    	x='1';
	    	for(int i=1;i<n;i+=2){
	    		if(s[i]!=x && s[i]!='?'){
	    			f2=0;
	    		}
	    		if(x=='0'){
	    			x='1';
	    		}
	    		else{
	    			x='0';
	    		}
	    	}
	    	if(!(f1||f2)){
	    		cout<<0<<endl;
	    		continue;
	    	}
	    }
	    int res=1;
	    if(flag1){
	    	res*=2;
	    }
	    if(flag2){
	    	res*=2;
	    }
	    cout<<res<<endl;
	    
	    
	    
	}
 
}