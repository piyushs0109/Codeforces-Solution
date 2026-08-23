#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long a,b,k,m,n;
    cin>>a>>b>>k>>m>>n;
   
    long long sc = a * (k-1) + b * (m-1);
    long long mi = max(0ll,min(a+b,n-sc));
 
    long long mx = 0;
    long long cl = n;
 
    if(k>m){
        swap(k,m);
        swap(a,b);
    }
    long long t1 = min(a,cl/k);
    mx += t1;
    cl -= t1 * k ;
 
    long long t2 = min(b,cl/m);
    mx += t2 ;
 
    cout<<mi<<" "<<mx<<endl;
}