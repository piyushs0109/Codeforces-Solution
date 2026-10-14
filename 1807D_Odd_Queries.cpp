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
        
    ll n , q;
    cin>>n>>q;
    ll a[n];
    ll b[n+1];
    b[0]=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        b[i+1]=b[i]+a[i];
 
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll sumt = b[n];
        ll summ = b[r]-b[l-1];
        ll nsum = sumt - summ + k*(r-l+1);
 
        if(nsum%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
         
    }
 
    return 0;
}