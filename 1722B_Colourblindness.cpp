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
        string s , p;
        cin>>s>>p;
        int found =0;
        for(int i =0;i<n;i++){
            if(s[i]=='R' && p[i]!='R'){
                found = 1;
            }
            if(s[i]!='R' && p[i]=='R'){
                found = 1;
            }
        }
        if(found == 1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}