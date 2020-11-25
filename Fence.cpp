#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,mp,k;
	    cin>>n>>mp>>k;
	    int a,b;
	    map<pair<int,int>,int>m;
	    for(int i=0;i<k;i++){
	        cin>>a>>b;
	        m[{a,b}] = 1;
	    }
	    
	    int c = 0;
	    for(auto it : m){
	        int a,b,t = 4;
	        
	        a = it.first.first;
	        b = it.first.second;
	        if(m.find({a,b+1})!=m.end()){
	            t--;
	        }
	        if(m.find({a+1,b})!=m.end()){
	            t--;
	        }
	        if(m.find({a-1,b})!=m.end()){
	            t--;
	        }
	        if(m.find({a,b-1})!=m.end()){
	            t--;
	        }
	        c+=t;
	        
	    }
	    cout<<c<<endl;
	    
	    
	    
	}
	
	
	
	return 0;
}

