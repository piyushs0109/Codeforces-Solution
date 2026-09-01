#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--){
        string s;
        cin>>s;
        string b ;
        cin>>b;
        int mx = max(s.size(),b.size());
        long long i = s.size();
        long long j = b.size();
 
        long long result = 0;
 
        while(s[i-1]==b[j-1] && i>0 && j>0){
            i--;
            j--;
       
         if(s[i-1]!=b[j-1]){
           
            result = i+j;
            break;
         }
        }
        if(s[s.size()-1] != b[b.size()-1]) result = s.size() + b.size();
        cout<<result;
        
    }
}