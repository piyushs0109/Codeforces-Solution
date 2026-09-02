#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll i=1,j=n-2;
        ll sumi=a[0],sumj=a[n-1];
        ll counta=1,countb=1;
        while(i<=j){
 
            if(sumi<sumj){
                
                sumi += a[i];
                i++;
                counta++;
            }
            else if(sumi>sumj){
            
                sumj += a[j];
                j--;
                countb++;
            }
            else if(sumi==sumj){
                
                sumi += a[i];
                i++;
                counta++;
            }
        }
        if(n==1){
            counta = 1;
            countb = 0;
        }
        cout<<counta<<" "<<countb;
 
        
    }
}