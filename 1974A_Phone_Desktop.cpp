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
        
    ll x,y;
    cin>>x>>y;
     
    ll result = (y+1)/2;
 
    ll left = result  * 15 - y*4;
    
    if(x > left){
        x -= left;
        result += (x+14)/15;
    }
    cout<<result<<endl;
         
}
 
    return 0;
}