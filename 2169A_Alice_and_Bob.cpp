#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a;
        cin>>n>>a;
        long long arr[n];
        long long countl =0,countr=0;
        for(int i =0 ;i<n;i++){
           cin>>arr[i];
           if(arr[i]<a) countl++;
           if(arr[i]>a)countr++;
        }
        if(countl>=countr) cout<<a-1<<endl;
        else cout<<a+1<<endl;
    }
}