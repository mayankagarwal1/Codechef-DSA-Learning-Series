#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,q;
	cin>>n>>q;
	int a[n+1];
	set<int>s;
	for(int i=1;i<=n;i++)cin>>a[i];
	s.insert(1);
	for(int i=2;i<=n;i++){
	    if(a[i]%a[i-1] !=0){
	        s.insert(i);
	    }
	}
// 	for(auto itt = s.begin();itt!=s.end();itt++){
// 	           cout<<*itt<<" ";
//       }
//       cout<<endl;
	
	for(int i=0;i<q;i++){
	    int z,j,x;
	    cin>>z;
	    if(z == 1){
	        cin>>j>>x;
	        a[j] = x;
	        
	        s.insert(j);
	        s.insert(j+1);
	        if(j-1>0 && x%a[j-1]==0){
	            s.erase(j);
	        }
	        if(j<=n &&a[j+1]%x == 0){
	            s.erase(j+1);
	        }
	        
	    }
	    else if(z==2){
	       // int ans = 1;
	        cin>>j;
	       // cout<<j<<endl;
	       //for(auto itt = s.begin();itt!=s.end();itt++){
	       //    cout<<*itt<<" ";
	       //}
	       //cout<<endl;
	        auto it = s.upper_bound(j);
	            it--;
	        
	        cout<<*it<<endl;
	    }
	}
	
	
	return 0;
}

