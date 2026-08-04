#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int found = 0;
    for(int i =0 ; i<s.length();i++){
        if(s[i]=='H'){
            
            found = 1;
            break;
        }
        if(s[i]=='Q'){
           
             found = 1;
            break;
        }
        if(s[i]=='9'){
            
             found = 1;
            break;
        }
 
    }
    if(found == 1)cout<<"YES"<<endl;
    else{
    cout<<"NO"<<endl;
} 
}