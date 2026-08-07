#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a , b;
        int res = 0;
        int j = 0;
        for(int i =1;i<=n;i++){
            cin>>a>>b;
            if(a <=10 && b>res ){
                res = max(b,res);
                j = i;
            }
        }
        cout<<j<<endl;
 
    }
    return 0;
}