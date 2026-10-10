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
        ll a[n];
        map<int,int> mpp;
        for(int i =0;i<n;i++){
            cin>>a[i];
            mpp[a[i]]++;
 
        }
        for(int i =0 ;i<n;i++){
            if(mpp[a[i]]>=3){
                cout<<a[i]<<endl;
                break;
            }
            else if(i==n-1){
                cout<<-1<<endl;
            }
        }
         
    }
 
    return 0;
}