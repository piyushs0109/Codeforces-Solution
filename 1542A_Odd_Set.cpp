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
        ll a[2*n];
        ll ocount =0;
        ll ecount =0;
        for(int i =0;i<2*n;i++){
            cin>>a[i];
            if(a[i]%2==0) ecount++;
            if(a[i]%2!=0) ocount++;
        }
        if(ocount==ecount) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
 
         
    }
 
    return 0;
}