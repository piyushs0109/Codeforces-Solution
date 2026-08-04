#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        if(a>m) a = m ;
        if(b>m) b = m;
        if(c> 2*m -(a+b)) c = 2*m -(a+b);
        long long result = a + b + c;
        cout<<result<<endl;
 
    }
    return 0 ;
}