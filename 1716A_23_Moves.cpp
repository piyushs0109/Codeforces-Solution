#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        if(abs(n)==1){
            cout<<2<<endl;
        }
        else if(abs(n)%3==0){
            cout<<abs(n)/3<<endl;
        }
        else if(abs(n)%3 == 1){
            cout<<(abs(n)/3)+1<<endl;
        }
       
        else{
             cout<<abs(n)/3+1<<endl;
            
           
        }
    }
}