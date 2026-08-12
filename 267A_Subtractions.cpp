#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b;
    cin>>a>>b;
    long long count = 0;
    while(a!=0 && b != 0){
        if(a>b){
            count += a/b ;
            a = a%b;
 
        }
        else{
            count += b/a;
            b = b%a ;
        }
    }
    cout<<count<<endl;
}
}