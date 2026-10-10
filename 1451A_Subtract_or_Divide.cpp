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
        
        if(n==2)cout<<1<<endl;
        else if(n==3)cout<<2<<endl;
        else if(n==1)cout<<0<<endl;
        else  if(n%2==0){
            cout<<2<<endl;
        }
        else cout<<3<<endl;
 
         
    }
 
    return 0;
}