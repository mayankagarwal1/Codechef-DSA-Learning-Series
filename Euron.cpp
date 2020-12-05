#include <bits/stdc++.h>
// #define ll long long
#define int long long
using namespace std;

int co;
void merge(int a[],int low, int mid, int high){
    
    int i = 0, j = 0,k;
    int n1 = mid - low + 1;
    int n2 = high-mid;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++){
        l[i] = a[low+i];
    }
    for(int i=0;i<n2;i++){
        r[i] = a[mid+1+i];
    }
    i=0;j=0;
    
    k = low;
    while(i<n1 && j<n2){
        
        if(l[i]<=r[j]){
            a[k] = l[i++];
        }
        else{
            co +=n1-i;
            a[k] = r[j++];
        }
        k++;
    }
    while(i<n1){
        a[k++] = l[i++];
    }
    while(j<n2){
        a[k++] = r[j++];
    }
}

void partition(int a[],int low , int high){
    if(low>=high){
        return;
    }
    int mid = (low + high-1)/2;
    partition(a,low,mid);
    partition(a,mid+1,high);
    
    merge(a,low,mid,high);
    
    return;
}



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
// 	c = 0;
	partition(a,0,n-1);
	cout<<co<<endl;
	return 0;
}

