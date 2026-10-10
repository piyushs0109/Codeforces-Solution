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
        
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i =0;i<n;i++){
        m[s[i]]++;
    }
    ll oddc =0;
    ll evenc=0;
    for(auto it : m){                                   
        if(it.second%2 != 0){
            oddc++;
        }
        else evenc++;
    }
    // cout<<oddc<<endl;
    // cout<<evenc<<endl;
    if(k==0){
        if(oddc==0 || oddc==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        if(oddc==0) cout<<"YES"<<endl;
        else if(k<=oddc){
            if(oddc-k==1 || oddc-k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        }
    }
    return 0;
}