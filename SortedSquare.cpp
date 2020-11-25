#include <bits/stdc++.h>
#define ll long long
using namespace std;
//squareSorted
// given a sorted array(can contain -ve elements)
// square every element and return a sorted array
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	if(a[n-1]<=0){
	    for(int i=n-1;i>=0;i--){
	        cout<<a[i]*a[i]<<" ";
	    }
	    cout<<endl;
	}
	else if(a[0]>=0){
	    for(int i=0;i<n;i++){
	        cout<<a[i]*a[i]<<" ";
	    }
	    cout<<endl;
	}
	else{
	    int i=0;
	    while(i<(n-1)){
	        if(a[i]<0 && a[i+1]>=0){
	            break;
	        }
	        i++;
	    }
	    int j=i;
	    i+=1;
	    while(i<n && j>=0){
	        int x = a[i]*a[i];
	        int y = a[j]*a[j];
	        if(x<=y){
	            cout<<x<<" ";
	            i++;
	        }
	        else{
	            cout<<y<<" ";
	            j--;
	        }
	        
	    }
	    while(j>=0){
	        cout<<a[j]*a[j]<<" ";
	        j--;
	    }
	    while(i<n){
	        cout<<a[i]*a[i]<<" ";
	    }
	    cout<<endl;
	}
	
	
	
	
	
	return 0;
}
