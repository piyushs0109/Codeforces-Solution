#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n , m;
    cin>>n>>m;
    long long a[n];
    for(int i =0 ;i<n;i++){
        cin>>a[i];
    }
     sort(a,a+n);
 
    long long sum = 0  ;
    for(int i = n-1 ; i>=0 && m > 0;i--){
        sum += m*a[i];
        m--;
    }
    cout<<sum<<endl;
}
return 0;
}