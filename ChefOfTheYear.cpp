#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	map<string,string>m1;
	map<string,int>m2;
	map<string,int>m3;
	for(int i=0;i<n;i++){
	    string s1,s2;
	    cin>>s1>>s2;
	    m1.insert({s1,s2});
	    m2.insert({s1,0});
	    m3.insert({s2,0});
	}
	
	for(int j=0;j<m;j++){
	    string s1;
	    cin>>s1;
	    m2[s1]++;
	    m3[m1[s1]]++;
	}
	string key;
	int max = 0;
	map<string,int>::iterator itr;
	for(itr = m2.begin();itr!=m2.end();itr++){
	    if((itr->second) > max){
	        max = itr->second;
	        key = itr->first;
	    }
	    else if(max == itr->second && max!=0){
	        if(key>itr->first){
	            key = itr->first;
	        } 
	    }
	}
	max = 0;
	string key2;
	for(auto it=m3.begin();it!=m3.end();++it){
	    if(it->second > max){
	        max = it->second;
	        key2 = it->first;
	    }
	    else if(max == it->second && max !=0){
	        if(it->first<key2){
	            key2 = it->first;
	        }
	    }
	}
	
	
	cout<<key2<<endl;
	cout<<key<<endl;
	
// 	for(auto itr = m1.begin();itr!=m1.end();++itr){
// 	    cout<<itr->first<<" "<<itr->second<<endl;
// 	}
	
	
	
	
	return 0;
}

