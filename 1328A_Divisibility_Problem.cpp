#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a , b;
        cin>>a>>b;
        int count=0;
        if(a<b) count = b-a;
         else  if(a%b != 0 ){
            count += b-(a%b) ;
        }
        cout<<count<<endl;
    }
}