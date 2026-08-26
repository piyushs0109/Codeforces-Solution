#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n,h;
    cin>>n>>h;
    long long a[n];
    long long sum =0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]<=h) sum++;
        else sum += 2;
 
    }
    cout<<sum<<endl;
}