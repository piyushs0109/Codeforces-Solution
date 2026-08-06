#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n];
        for(int i =0 ;i<n;i++){
            cin>>a[i];
        }
        int found =0;
        int found2 =0;
        for(int i =0 ;i<n;i++){
            if(a[i]%2 != 0){
                found = 1;
            }
            if(a[i]%2 == 0){
                found2 = 1;
            }
        }
        if(found == 1 ){
            if(n%2==0){
                if(found2 == 1){
                     cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
 
    }
}