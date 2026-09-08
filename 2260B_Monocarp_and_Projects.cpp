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
        ll x,y,k;
        cin>>x>>y>>k;
        ll sum =0;
        ll mod = 0;
        for(ll i=0;i<k;i++){
            sum += y%x;
            mod = y%x;
            if(y-x == mod ){
                sum += (k-i-1)*mod ;
                break;
            }
            y++;
            x++;
        }
        cout<<sum<<endl;
        
    
         
    }
 
    return 0;
}