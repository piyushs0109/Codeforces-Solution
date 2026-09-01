#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        if(s == "yes")cout<<"YES"<<endl;
        else if(s == "Yes")cout<<"YES"<<endl;
        else if(s == "yEs")cout<<"YES"<<endl;
        else if(s == "yeS")cout<<"YES"<<endl;
        else if(s == "YEs")cout<<"YES"<<endl;
        else if(s == "yES")cout<<"YES"<<endl;
        else if(s == "YeS")cout<<"YES"<<endl;
        else if(s == "YES")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}