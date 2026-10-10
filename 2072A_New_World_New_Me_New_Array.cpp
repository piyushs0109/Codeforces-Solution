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
        
        ll n,k,p;
        cin>>n>>k>>p;
        if(abs(k%p)==0){
            if(abs(k/p) <= n)cout<<abs(k/p)<<endl;
            else cout<<-1<<endl;
        }
        else {
            if(abs(k/p)+1 <= n) cout<<abs(k/p)+1<<endl;
            else cout<<-1<<endl;
        }
         
    }
 
    return 0;
}