#include <bits/stdc++.h>
#define ll long long
using namespace std;

// priority_queue<int,vector<int>,greater<int>>pq;

// vector<int>v;
// int b_search(int x)
// {
//     if(mst.empty()){
//         // v.push_back(x);
//         return -1;   
//     }  
    
//     int s = 0,e = mst.size()-1;
//     int m = (s+e)/2;
//     int ind = -1;
//     while(s<e){
//         if(mst[m]>x){
//             e = m-1;
//             ind = m;
//             m = (s+e)/2;
//         }
//         else if(mst[m]<=x){
            
//             s = m+1;
//             m = (s+e)/2;
//         }
//     }
//     return ind;
    
// }




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	multiset<ll>mst;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll len = 0;
        for(int i=0;i<n;i++){
            
            if(mst.empty()){
                mst.insert(a[i]);
            }
            else{
                auto it = mst.lower_bound(a[i]);
                if(*it == a[i]){
                    it++;
                }
                if(it==mst.end()){
                    mst.insert(a[i]);
                }
                else{
                    
                    mst.erase(*it);
                    mst.insert(a[i]);
                }
            }
        }
        
        cout<<mst.size()<<" ";
        
        for(auto ittt : mst){
            cout<<ittt<<" ";
            
        }
        cout<<endl;
        mst.clear();
    
    }
	
	return 0;
}

