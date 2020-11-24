#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	long n,m,max = -1e18,x,y;
	ll min = 1e18;
	cin>>n>>m;
	long a[n],b[m];
	for(long i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]>max){
	        max = a[i];
	        x = i;
	    }
	}
	for(long i=0;i<m;i++){
	    cin>>b[i];
	    if(b[i]<min){
	        min = b[i];
	        y = i;
	    }
	}
	for(long i=0;i<m;i++){
	    cout<<x<<" "<<i<<endl;
	}
	for(long i=0;i<n;i++){
	    if(a[i]==a[x]){
	        continue;
	    }
	    cout<<i<<" "<<y<<endl;
	}
	
	return 0;
}

