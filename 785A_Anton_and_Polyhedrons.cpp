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
 
    ll n;
    cin >> n;
 
    ll sum = 0;
 
    while (n--) {
        string s;
        cin >> s;
 
        if (s == "Tetrahedron") sum += 4;
        else if (s == "Cube") sum += 6;
        else if (s == "Octahedron") sum += 8;
        else if (s == "Dodecahedron") sum += 12;
        else if (s == "Icosahedron") sum += 20;
    }
 
    cout << sum << endl;
 
    return 0;
}