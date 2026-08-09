#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(a,max(b,c));
        int mi = min(a,min(b,c));
        cout<<mx-mi<<endl;
    }
}