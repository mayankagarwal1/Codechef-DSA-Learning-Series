#include <bits/stdc++.h>
#define ll long long
// typedef long long ll;
using namespace std;
ll x,b,c;
vector<pair<ll,ll>>dishes;
vector<tuple<ll,ll,ll>>clan;
string isokforval(ll val){
    ll p1 = 0;
    ll res = 1;
    for(ll i=0;i<b;i++){
        ll pos = dishes[i].first;
        while(p1<c && pos>=get<0>(clan[p1])){
            if(val>=get<1>(clan[p1]))
                val += get<2>(clan[p1]);
            p1++;
        }
        if(val  > dishes[i].second){
            val -= dishes[i].second;
        }
        else{
            res = 0;
            break;
        }
    } 
    if(res && val >0){
        return "Y";
    }
    else{
        return "N";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    
        cin>>x;
        cin>>b;
        ll temp1,temp2,temp3,sum = 1;
        for(ll i=0;i<b;i++){
            cin>>temp1>>temp2;
            sum+=temp2;
            dishes.push_back(make_pair(temp1,temp2));
        }
        cin>>c;
        for(ll i=0;i<c;i++){
            cin>>temp1>>temp2>>temp3;
            clan.push_back(make_tuple(temp1,temp2,temp3));
        }
        ll s = 0,e = sum,m;
        // m = s+(e-s)/2;
        ll num = 0;
        while(s<=e){
            m = s+(e-s)/2;
            string a = isokforval(m);
            if(a == "Y"){
                num = m;
                e = m-1;
            }
            else{
                s = m+1;
            }
            
        }
        cout<<num<<"\n";
        dishes.clear();
        clan.clear();
	}
	return 0;
}

