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
        ll a[n];
        ll counto =0;
        ll countmo =0;
        ll countme =0;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]%2 != 0) counto++;
            else if((a[i]/2)%2==0) countme++;
            else countmo++;
 
        }
        cout<<max(counto,max(countme,countmo))<<endl;
        
    }
}