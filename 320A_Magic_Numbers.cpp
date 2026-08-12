#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int count = 0;
    int found =0;
    for(int i =0;i<n.length();i++){
        if(n[0]=='4'){
            found = 1;
            break;
        }
        else if(n[i] == '4'){
            count++;
            if(count >= 3){
                found =1;
                break;
            }
        }
        else if(n[i]== '1'){
            count = 0;
        }
        else{
            found =1;
            break;
 
        }
    }
    if(found == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}