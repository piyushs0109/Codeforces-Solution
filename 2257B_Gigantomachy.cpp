#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n ,m;
        cin>>n>>m;
        long long a[n];
        long long b[m];
 
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i =0;i<m;i++){
            cin>>b[i];
        }
        long long sum1 =0;
        long long sum2 =0;
 
        if(n==1 && m==1){
            sum1 = a[0];
            sum2 = b[0];
        }
       else {
         for(int i =0;i<n;i++){
            if(i==n-1) sum1 += a[i];
            else {
                sum1 += a[i] - a[i+1] + 1 ;
            }
            
        }
        for(int j=0;j<m;j++){
            if(j==m-1) sum2 += b[j];
            else {
            sum2 += b[j] - b[j+1] + 1;
            }
        }
    }
        
        if(sum1>=sum2) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}