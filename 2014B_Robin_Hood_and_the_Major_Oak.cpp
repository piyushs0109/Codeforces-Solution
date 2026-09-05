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
 
    int t;
    cin>>t;
    while(t--){
        ll n , k;
        cin>>n>>k;
        
 
         ll counto =((n+1)/2) - ((n-k+1)/2);
         if(n==1) counto = 1;
         if(counto%2==0)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    
    }
   
 
    return 0;
}