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
        
        ll n,k;
        cin>>n>>k;
        ll a[n*k];
        for(ll i=0;i<n*k;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum =0;
        ll i = n*k - n/2 -1;
        for(ll j=0;j<k;j++){
            sum += a[i];
            i -= n/2 +1;
        }
        cout<<sum<<endl;
         
    }
 
    return 0;
}