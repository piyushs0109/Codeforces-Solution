#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int count =0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            if(m>0)m--;
            else count++;
        }
        else {
            if(k>0){
            k--;
           }
           else if(m>0){
            m--;
           }
           else count++;
        }
    }
    cout<<count<<endl;
   return 0;
}