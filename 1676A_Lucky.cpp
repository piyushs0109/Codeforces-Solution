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
        ll num = stoi(s);
        ll sum1 =0;
        ll sum2 =0;
        for(int i =0;i<6;i++){
            if(i<3){
                sum1 += num%10 ;
                num = num/10 ;
            }
            else {
                sum2 += num%10 ;
                num = num/10 ;
            }
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
         
    }
 
    return 0;
}