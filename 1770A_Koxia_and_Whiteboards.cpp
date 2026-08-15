#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n , m;
        cin>>n>>m;
        long long a[n];
        long long b[m];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i =0;i<m;i++){
            cin>>b[i];
        }
       
        
        for(int j=0;j<m;j++){
             sort(a,a+n); 
                a[0]=b[j];    
                
        }
        long long sum = accumulate(a,a+n,0LL);
        cout<<sum<<endl;
 
 
    }
}