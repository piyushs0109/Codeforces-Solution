#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i =0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }
        long long mxa =0;
        long long mxb =0;
        for(int i=0;i<n;i++ ){
            if(a[i]>mxa) mxa = a[i];
            if(b[i]>mxb) mxb = b[i];
        }
        cout<<mxa*mxb<<endl;
    }
    return 0;
    
}