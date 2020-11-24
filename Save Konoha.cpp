#include <bits/stdc++.h>
#define ll long long
using namespace std;
// void heapify(int a[],int i,int n){
//     int largest = i;
//     int l = 2*i+1;
//     int r = 2*i+2,temp;
    
    
//     if(l<n && a[l]>a[largest]){
//         largest = l;
//     }
//     if(r<n && a[r] > a[largest]){
//         largest = r;
//     }
//     if(largest != i){
//         temp = a[largest];
//         a[largest] = a[i];
//         a[i] = temp;
//         heapify(a,largest,n);
//     }
    
    
    
    
// }


// void buildheap(int a[],int n){
    
//     int start = n/2 - 1;
//     for(int i=start;i>=0;i--){
//         heapify(a,i,n);
//     }
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long n,z,max,ind,res = 1,count = 0;
        
        cin>>n>>z;
        int temp;
        priority_queue<int>p;
        for(int i=0;i<n;i++){
            cin>>temp;
            p.push(temp);
        }
        
        
        
        while( z>0){
            max = p.top();
            p.pop();
            if(max == 0){
                res = 0;
                break;
            }
            z = z-max;
            p.push(max/2);
            count++;
        }
        
        
        if(res){
            cout<<count<<endl;
        }
        else{
            cout<<"Evacuate"<<endl;
        }
        
        
        
    }
	
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// void heapify(int a[],int i,int n){
//     int largest = i;
//     int l = 2*i+1;
//     int r = 2*i+2,temp;
    
    
//     if(l<n && a[l]>a[largest]){
//         largest = l;
//     }
//     if(r<n && a[r] > a[largest]){
//         largest = r;
//     }
//     if(largest != i){
//         temp = a[largest];
//         a[largest] = a[i];
//         a[i] = temp;
//         heapify(a,largest,n);
//     }
    
    
    
    
// }


// void buildheap(int a[],int n){
    
//     int start = n/2 - 1;
//     for(int i=start;i>=0;i--){
//         heapify(a,i,n);
//     }
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long n,z,max,ind,res = 1,count = 0;
        
        cin>>n>>z;
        int temp;
        priority_queue<int>p;
        for(int i=0;i<n;i++){
            cin>>temp;
            p.push(temp);
        }
        
        
        
        while( z>0){
            max = p.top();
            p.pop();
            if(max == 0){
                res = 0;
                break;
            }
            z = z-max;
            p.push(max/2);
            count++;
        }
        
        
        if(res){
            cout<<count<<endl;
        }
        else{
            cout<<"Evacuate"<<endl;
        }
        
        
        
    }
	
	return 0;
}

