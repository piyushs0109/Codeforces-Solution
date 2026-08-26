#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long awin =0;
    long long dwin =0;
    for(int i =0;i<s.size();i++){
        if(s[i] == 'A') awin++;
        else dwin++;
    }
    if(awin>dwin) cout<<"Anton"<<endl;
    else if(awin<dwin)cout<<"Danik"<<endl;
    else cout<< "Friendship"<<endl;
}