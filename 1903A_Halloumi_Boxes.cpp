#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int found =1 ;
        for(int i =0;i<n-1;i++){
            if(a[i]>a[i+1]) found =0;
        }
        if(k>1 || found==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}