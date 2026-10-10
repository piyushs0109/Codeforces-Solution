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
        
        ll a,b;
        cin>>a>>b;
        if(a%2 != 0 ) cout<<"NO"<<endl;
        else {
            if(a>=2) cout<<"YES"<<endl;
            else if(b%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
 
        }
         
    }
 
    return 0;
}