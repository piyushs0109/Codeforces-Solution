#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long x , y;
        cin>>x>>y;
        long long a[x];
        long long mx=0,mi=0;
        for(int i =0;i<x;i++){
            cin>>a[i];
            if(a[i]==1 ){
                mx = i;
            }
        }
        for(int i =0;i<x;i++){
            
            if(a[i]==1 ){
                mi = i;
                break;
            }
        }
        if(mx-mi < y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
    return 0;
}