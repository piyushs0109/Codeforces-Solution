#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--){
        ll n,l;
        cin>>n>>l;
        ll a[n+1];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        a[n]=l;
        sort(a,a+n);
         double  mxdif=max(a[0]-0,a[n]-a[n-1]);
        for(int i =0;i<n;i++){
           double b =(a[i+1]-a[i])/2.0;
            if( b >= mxdif) mxdif = b;
            
        }
        cout<<fixed<<setprecision(10)<<mxdif;
        
        
    }
}