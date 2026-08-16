#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long b,k;
    cin>>b>>k;
    long long a[k];
    long long countodd =0;
    for(int i =0;i<k;i++){
        cin>>a[i];
        if(b%2 == 1 && i != k-1){
            if(a[i]%2 == 1){
                countodd++ ;
            }
        }
    }
    if(a[k-1]%2 == 1 ) countodd++;
    if(countodd%2 != 0) cout<<"odd"<<endl;
    else cout<<"even"<<endl;
 
    
}