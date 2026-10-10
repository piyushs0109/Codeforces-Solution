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
        
        string n;
        cin>>n;
        map<char,int> m;
        for(ll i =0;i<n.size();i++){
            m[n[i]]++;
        }
        
        ll mx = min(m['0'],m['1']);
        
        if(m['0']==0 || m['1']==0) cout<<"NET"<<endl;
        else if(mx%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
 
    return 0;
}