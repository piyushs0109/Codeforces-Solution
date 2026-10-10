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
    cin>>t;
 
    while(t--){
        ll n;
        cin>>n;
 
        ll a[n];
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        string s;
        cin>>s;
 
        ll sum=0;
 
        ll pre[n+1];
        pre[0]=0;
 
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+a[i];
        }
 
        ll l=0;
        ll r=n-1;
 
        while(l<r){
 
            while(l<n && s[l]!='L'){
                l++;
            }
 
            while(r>=0 && s[r]!='R'){
                r--;
            }
 
            if(l<r){
                sum+=pre[r+1]-pre[l];
                l++;
                r--;
            }
        }
 
        cout<<sum<<endl;
    }
 
    return 0;
}