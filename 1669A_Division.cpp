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
        if(n>=1900) cout<<"Division 1"<<endl;
        if(n>=1600 && n<= 1899) cout<<"Division 2"<<endl;
        if(n>=1400 && n<= 1599) cout<<"Division 3"<<endl;
        if(n<= 1399) cout<<"Division 4"<<endl;
         
    }
 
    return 0;
}