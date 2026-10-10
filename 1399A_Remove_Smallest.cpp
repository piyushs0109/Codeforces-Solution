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
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int found =0;
        sort(a,a+n);
        for(int i =1;i<n;i++){
            if(a[i]-a[i-1] >1) {
                found =1;
                break;
 
            }
        }
        if(found ==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         
    }
 
    return 0;
}