#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f =0;
        int l =0;
        for(int i =0;i<n;i++){
            if(s[i]=='B'){
             f=i; 
             break;
            }
        }
        for(int j =n-1;j<n;j--){
            if(s[j]=='B'){
                l = j;
                break;
            }
        }
        cout<<l-f+1<<endl;
    }
}