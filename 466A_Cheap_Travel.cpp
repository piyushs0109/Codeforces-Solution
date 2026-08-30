#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    int result =0;
    
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(m*a <= b){
            cout<<a*n;
        }
        else if(m*a > b ){
            if(n<=m){
                if(n*a  < b) cout<<a*n;
                else cout<<b<<endl;
                break;
            }
            result =( n/m) * b ;
            if((n%m )* a > (n%m) * b) result += b;
            else result += (n%m) * a;
 
            cout<<result;
 
        }
        
    }
    return 0;
}