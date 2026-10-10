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
        
           ll a , b ,c ,d;
           cin>>a>>b>>c>>d;
           ll count =0;
           vector<int> vs={a,b,c,d};
           for(int i =1;i<4;i++){
            if(a<vs[i]) count++;
           }
           cout<<count<<endl;
 
         
    }
 
    return 0;
}