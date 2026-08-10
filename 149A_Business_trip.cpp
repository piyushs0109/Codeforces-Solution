#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int a[12];
    for(int  i =0 ;i<12;i++){
        cin>>a[i];
        
    }
    
    sort(a,a+12);
    int sum = 0;
    int count = 0;
    int tsum =0;
    for(int i=11;i>=0;i--){
        tsum += a[i];
        if(sum<n){
            sum += a[i];
            count++;    
           }
 
    }
    if(tsum<n) cout<<-1<<endl;
    
    else cout<<count<<endl;
}