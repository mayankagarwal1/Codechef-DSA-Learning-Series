#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll t; 
    cin>>t;
    while(t--){
        ll n,k,q,n0 = 0,n1 = 0,j=0;
        cin>>n>>k>>q;
        char s[10000000];
        ll arr[n+1];
        for(ll i=1;i<=n;i++){
            cin>>s[i];
        }
        
        for(ll i=1;i<=n;i++){
            while(j<=n && n0<=k && n1 <=k){
                j++;
                if(j>n){
                    break;
                }
                if(s[j] == '1'){
                    n1++;
                }
                else{
                    n0++;
                }
            }
            arr[i] = j-1;
            if(s[i] == '1'){
                n1--;
            }
            else{
                n0--;
            }
        }
        ll sumarr[n+1] = {0};
        sumarr[1] = sumarr[1]+(arr[1]-1 +1);
        for(ll i=2;i<=n;i++){
            sumarr[i] = sumarr[i-1] + (arr[i]-i+1);
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            ll s = l-1,e = r+1,m,ind;
            while(e-s >1){
                m = (s+e)/2;
                if(arr[m]>r){
                    e = m;
                }
                else{
                    // ind = m;
                    s = m;
                }
            }
            ind = s;
            ll indsum;
            if(ind !=0){
                indsum = (r*(r+1))/2 - (ind*(ind+1))/2;
            }
            else{
                indsum = (r*(r+1))/2;
            }
            
            ll numb = r-ind;
            
            
            ll ans = (sumarr[ind] - sumarr[l-1]) + (r*numb + numb - indsum);
            cout<<ans<<endl;
            
            
            
        }
        
        
        
        // for(ll i=1;i<=n;i++)cout<<arr[i]<<" ";
        // cout<<endl;
    }
    return 0;
}
