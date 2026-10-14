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
        ll mx =0;
        ll mn =0;
        //for min
        if(n%4==0) mx = n/4;
        else if(n%4==2) mx = n/4;
 
        //for max
        if(n<6) mn = n/4;
        else{
            if(n%6==0) mn = n/6;
        else if(n%6==2) mn = n/6 +1;
        else if(n%6 == 4) mn = n/6 + 1;
 
        }
 
        if(n%4 ==1 || n%4 == 3 || n%6 == 1 || n%6 == 3|| n%6==5 || n<4){
            cout<<-1<<endl;
        }
        else {
            cout<<mn<<" "<<mx<<endl;
        }
        
    }
 
    return 0;
}