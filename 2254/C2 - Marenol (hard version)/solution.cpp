// Problem: C2. Marenol (hard version)
// Contest: Codeforces - Codeforces Round 1114 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2254/C2
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
	    string a,b;
	    cin>>a>>b;
	    string t1="",t2="",t3="",t4="";
	    fori(i,0,n){
	    	if(i%2==0){
	    		t1+=a[i];
	    	}
	    	else{
	    		t2+=a[i];
	    	}
	    	if(i%2==0){
	    		t3+=b[i];
	    	}
	    	else{
	    		t4+=b[i];
	    	}
	    }
	    sort(all(t1));
	    sort(all(t2));
	    sort(all(t3));
	    sort(all(t4));
	    if(t1!=t3 || t2!=t4){
	    	cout<<-1<<endl;
	    	continue;
	    }
	    
	    
	    t1="",t2="",t3="",t4="";
	    fori(i,0,n){
	    	if(i%2==0){
	    		t1+=a[i];
	    	}
	    	else{
	    		t2+=a[i];
	    	}
	    	if(i%2==0){
	    		t3+=b[i];
	    	}
	    	else{
	    		t4+=b[i];
	    	}
	    }
	    
	    int j=0;
	    int res=0;
	    for(int i=0;i<t1.size();i++){
	    	if(t1[i]=='0'){
	    		while(t3[j]!='0'){
	    			j++;
	    		}
	    		res+=abs(i-j);
	    		j++;
	    		
	    	}
	    	
	    }
	    j=0;
	    for(int i=0;i<t2.size();i++){
	    	if(t2[i]=='0'){
	    		while(t4[j]!='0'){
	    			j++;
	    		}
	    		res+=abs(i-j);
	    		j++;
	    		
	    	}
	    	
	    }
	    cout<<res<<endl;
	    
	}
 
}