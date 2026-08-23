#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long mx = max(a,max(b,c));
        long long mi = min(a,min(b,c));
        long long mid = a+b+c - mx - mi;
       
 
        if(mi+mid > mx) cout<<mx-mi<<endl;
        else cout<<mid<<endl;
    }
    return 0;
}