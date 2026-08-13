#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
    int a[3*n];
    int x=0,y=0,z=0;
    for(int i =0 ;i<n*3;i++){
        cin>>a[i];
    }
    for(int i =0;i<3*n;i = i+3){
        x += a[i];
    }
    for(int i =1;i<3*n;i = i+3){
        y += a[i];
    }
    for(int i =2;i<3*n;i = i+3){
        z += a[i];
    }
    if(x==0 && y==0 && z==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
 
}