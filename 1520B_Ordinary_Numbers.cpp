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
        ll ans =0;
       
        for(int i =1;i<=9;i++){
            ll num=0;
 
            while(true){
                num = num*10 +  i ;
                if(num>n){
                    break;
                }
                ans++;
            }
        }
        cout<<ans<<endl;
         
    }
 
    return 0;
}