#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
 
    while(t--) {
        
        ll n;
        cin>>n;
        ll a[n];
        ll t0=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) t0++;
        }
        ll l =-1;
        ll r =-1;
        for(ll i=0;i<n;i++){
            if(a[i]!=0){
                if(l==-1)l=i;
                r=i;
            }
        }
        
       ll  ans =0;
        if(l==-1) ans = 0;
        else {
            ans =1;
 
        for(ll i=l;i<=r;i++){
            if(a[i]==0){
                ans =2;
                break;
            }
        }
        }
        
        cout<<ans<<endl;
    }
 
    return 0;
}