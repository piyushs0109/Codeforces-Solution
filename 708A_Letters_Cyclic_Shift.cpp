#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--){
        string s;
        cin>>s;
        ll count =0;
        if(s.size()==1){
            if(s[0]=='a') cout<<"z";
            else {
                char ch = s[0];
                ch -= 1;
                cout<<ch;
            }
        }
        else {
            for(ll i=0;i<s.size();i++){
            if(s[i]!='a'){
                count =0;
                char ch = s[i];
                ch -= 1;
                cout<<ch;
            }
            else {
                if(count==s.size()-1){
                    cout<<"z";
                 }
                
                else if(count == i){
                    cout<<"a";
                    count++;
                 }
                
                 else {
                    cout<<"a";
                    for(ll j=i+1;j<s.size();j++){
                        cout<<s[j];
                    }
                    break;
                 }
            }
 
        }
 
        }
            
    }
    return 0;
}