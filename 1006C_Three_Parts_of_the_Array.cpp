#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t =1;
    //cin >> t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i =0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"0";
            return 0;
        }
        long long i=1,j=n-2;
        long long sumf =a[0];
        long long sumb=a[n-1];
        long long mxsum = 0;
        while(j>=i){
            if(sumf>sumb ){
                sumb += a[j];
                j--;
            }
            else if(sumb>sumf ){
                sumf += a[i];
                i++;
 
            }
            else if(sumb==sumf  ){
                mxsum = sumf;
                if(i==j){
                    break;
                }
                sumf += a[i];
                i++;
                sumb += a[j];
                j--;
            }
            
        }
        if(sumb==sumf ){
                mxsum = sumf;
             }
       
        cout<<mxsum;       
}
return 0;
}