#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3 != 0)cout<<"NO"<<endl;
        else if((a+b+c)%3 == 0){
            if(a<=(a+b+c)/3 && b<=(a+b+c)/3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}