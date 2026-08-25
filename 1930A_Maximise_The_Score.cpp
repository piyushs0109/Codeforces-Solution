#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll a[2*n];
        for(int i =0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+(2*n));
        ll sum =0;
        for(int i =0;i<2*n;i = i+2){
            sum += a[i];
 
        }
        cout<<sum<<endl;  
    }
    return 0;
}