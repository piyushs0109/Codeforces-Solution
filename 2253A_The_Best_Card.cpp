#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n ;
        cin>>n;
        int found = 0;
        for(int i=2;i<=n;i++){
            if((n+1)%i == 0){
                found = 1;
            }
        }
        if(found==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    
    }
    return 0;
}