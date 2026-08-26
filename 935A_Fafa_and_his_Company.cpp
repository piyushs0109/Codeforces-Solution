#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin>>n;
    long long count=0;
    for(int i =1;i<n;i++){
        if(n%i==0)count++;
    }
    cout<<count<<endl;
}