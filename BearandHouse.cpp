#include <bits/stdc++.h>
#define ll long long
#define boost ios:sync_with_stdio(false); cin.tie(0)
using namespace std;



int findx(int y){
    int s = 0;
    int e = 1001;
    int m;
    // int res;
    char r[20];
    while((e-s) > 1){
        m = (s+e)/2;
        cout<<"? "<<m<<" "<<y<<"\n";
        cin>>r;
        if(strcmp(r,"YES")==0){
            // res = m;
            s = m;
        }
        else{
            e = m;
        }
        
    }
    return s;
    
    
    
    
}
int findy(int x){
    int s = 0;
    int e = 1001;
    int m;
    // int res;
    char r[20];
    while((e-s) > 1){
        m = (s+e)/2;
        cout<<"? "<<x<<" "<<m<<"\n";
        cin>>r;
        if(strcmp(r,"YES")==0){
            // res = m;
            s = m;
        }
        else{
            e = m;
        }
        
    }
    return s;
    
    
    
    
}





int main() {
    int a,b,h;
    a = findx(0);
    a = a*2;
    b = findx(a);
    b = b*2;
    h = findy(0);
    h = h-a;
    cout<<"! "<<(a*a + ((b/2)*h))<<"\n";
    
    
    
    
	return 0;
}

