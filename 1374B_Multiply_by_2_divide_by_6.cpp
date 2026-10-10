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
        ll count =0;
        ll a=0,b=0;
 
        while(n%2==0){
            n= n/2;
            a++;
        }
        while(n%3==0){
            n = n/3;
            b++;
        }
        if(n!=1 || a>b){
            cout<<-1<<endl;
        }
        else cout<<2*b -a<<endl;
         
    }
 
    return 0;
}