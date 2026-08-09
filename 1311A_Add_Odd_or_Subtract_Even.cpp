#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        long long result = 0;
        if(a==b) result = 0;
         else  if(a<b){
            if((b-a)%2 == 0) result = 2;
            else result = 1 ;
        }
        else if(b<a){
            if((a-b)%2 == 0) result = 1;
            else result = 2;
 
        }
        cout<<result<<endl;
    }
    return 0 ;
}