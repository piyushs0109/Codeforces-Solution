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
        
        ll a,b,n;
        cin>>a>>b>>n;
        ll arr[n];
        ll sum =b;
        for(ll i =0;i<n;i++){
            cin>>arr[i];
            sum +=  min(arr[i],a-1);
        }
        
        cout<<sum<<endl;
 
         
    }
 
    return 0;
}