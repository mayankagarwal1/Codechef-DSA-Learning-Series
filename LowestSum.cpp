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
	    int k,q;
	    cin>>k>>q;
	    vector<ll>m(k),s(k),sum;
        for(int i=0;i<k;i++){
            cin>>m[i];
        }
        for(int i=0;i<k;i++){
            cin>>s[i];
        }
        sort(m.begin(),m.end());
        sort(s.begin(),s.end());
        
        int size = k>500?500:k;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                sum.push_back(m[i]+s[j]);
            }
        }
        sort(sum.begin(),sum.end());
        while(q--){
            int n;
            cin>>n;
            cout<<sum[n-1]<<"\n";
        }
	    
	}
	return 0;
}

