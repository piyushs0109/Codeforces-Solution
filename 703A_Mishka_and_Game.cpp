#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin>>n;
    long long mwin =0;
    long long cwin =0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) mwin++;
        else if(a<b) cwin++;
    }
    if(mwin>cwin)cout<<"Mishka"<<endl;
    else if(mwin<cwin)cout<< "Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    
}