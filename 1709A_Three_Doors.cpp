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
        int a , b , c;
        cin>>a>>b>>c;
        int k =n;
        int ct =0;
        while(k!=0 && ct<3){
            ct++;
            if(k == 1){
                k = a;
            }
            else if(k==2){
                k = b;
            }
            else if(k==3){
                k = c;
            }
        }
        if(ct == 3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
         
    }
 
    return 0;
}