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
        
        int n ;
        cin>>n;
        string s;
        cin>>s;
        ll mx =0;
        ll ls =0;
        ll rs =0;
        for(int i =0;i<n;i++){
            if(s[i]=='<'){
                rs =0;
                ls++;
                mx = max(mx,ls);
            }
            else {
                ls =0;
                rs++;
                mx = max(mx,rs);
            }
        }
        cout<<mx+1<<endl;     
    }
 
    return 0;
}