#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        long long result = (n-1)*k + 1;
        cout<<result<<endl;
    }
}