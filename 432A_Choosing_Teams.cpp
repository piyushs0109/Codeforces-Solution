#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n,k;
    cin>>n>>k;
    long long tr =5-k;
    int a[n];
    int count =0;
    int team =0;
    for(int i =0;i<n;i++){
     cin>>a[i];
     if(a[i]<=tr){
        count++;
     }
     if(count == 3){
        team++;
        count=0;
     }
 
    }
    cout<<team<<endl;
}