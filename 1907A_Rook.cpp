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
        
        string s ;
        cin>>s;
        ll n = int(s[1]) - 48;
        char a = s[0];
        for(int i =1;i<9;i++){
            if(i==n) continue;
            cout<<a<<i<<endl;
        }
        string w = "abcdefgh";
        for(int i =0;i<8;i++){
            if(w[i]==a) continue;
            cout<<w[i]<<n<<endl;
        }
         
    }
 
    return 0;
}