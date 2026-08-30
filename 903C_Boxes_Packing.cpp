#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,ll> mpp;
        for(ll i =0;i<n;i++){
            mpp[a[i]]++;
        }
        ll mx =0;
        for(ll i =0;i<n;i++){
            mx = max(mx,mpp[a[i]]);
           
        }
        cout<<mx; 
    }
}