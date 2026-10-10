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
        
        string s;
        cin>>s;
        map<string,int> mpp;
        for(int i =0;i+1<s.size();i++){
            mpp[s.substr(i,2)]++ ;
 
        }
        ll mx =0;
        string ans = "";
        for(int i=0;i+1<s.size();i++){
            string t = s.substr(i,2);
 
            if(mpp[t] > mx){
                mx = mpp[t];
                ans = t;
            }
           
        }
        cout<<ans<<endl;                                 
    }
 
    return 0;
}