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
 
    ll k, r;
    cin >> k >> r;
 
    ll i = 1;
 
    while (true) {
        ll amount = k * i;
 
        if (amount % 10 == 0 || amount % 10 == r) {
            cout << i << endl;
            break;
        }
 
        i++;
    }
 
    return 0;
}