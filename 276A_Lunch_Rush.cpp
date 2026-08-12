#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long mx = INT_MIN;
    for(int i =0;i<n;i++){
        long long j,t;
        cin>>j>>t;
        if(t>k){
            mx = max(mx,j-t+k);
        }
        else mx = max(mx,j);
    }
    cout<<mx<<endl;
}