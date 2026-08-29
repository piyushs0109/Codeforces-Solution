#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    int fsum = 1;
    int fsum2 = 1;
    int a[20];
     a[0]=1;
    for(int i =1;i<20;i++){
        a[i] = fsum + fsum2 ;
        int t = fsum2;
        fsum2 += fsum;
         fsum = t;
         
    }for(int i =1;i<=t;i++){
        int found =0;
        for(int j=0;j<20;j++){
            if(i == a[j]){
             cout<<"O";
             found =1;
             break;
 
            } 
        }
        if(found==0)cout<<"o";
    }
    cout<<endl;
    return 0;
   
}