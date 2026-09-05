#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll count =0;
        for(int i =0;i<n;i = i+k){
            for(int j=i;j<i+k;j++){
                if(s[j] == '0'){ 
                    break;
                }
                else if(j==i+k-1){
                  
                    count++;
 
                }
                
            }
 
        }
        cout<<count<<endl;
        
    }
}