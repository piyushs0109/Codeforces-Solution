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
        
        ll n,k,x;
        cin>>n>>k>>x;
        ll ts = (n*(n+1))/2;
        ll ls = ((n-k)*(n-k+1))/2;
        ll is = (k*(k+1))/2;
        if(ts<x)cout<<"NO"<<endl;
        else if((ts-ls)<x)cout<<"NO"<<endl;
        else if(is>x)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
         
    }
 
    return 0;
}