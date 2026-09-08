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
    string s;
    cin>>s;
    vector<string> vs;
    map<string ,int> mpp;
    for(int i=0;i<n;i = i+1){
        string k = s.substr(i,2);
        vs.push_back(k);
        mpp[k]++;
 
    }
    cout<<mpp.size()-1<<endl;
         
    }
 
    return 0;
}