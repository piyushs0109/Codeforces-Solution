#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    long long m;
    cin>>m;
    long long b[m];
    for(int i =0;i<m;i++){
        cin>>b[i];
    }
    long long mx=0,count=0;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(b[j]%a[i] ==0){
                if(b[j]/a[i] == mx){
                    mx = max(mx,b[j]/a[i]);
                    count++;
                }
                if(b[j]/a[i] != mx){
                    if(mx<b[j]/a[i]) count = 1;
                    mx = max(mx,b[j]/a[i]);
                    
                }
 
            }
        }
    }
    cout<<count<<endl;
 
}