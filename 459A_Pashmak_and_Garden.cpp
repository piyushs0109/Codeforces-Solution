#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b!=d){
            cout<<a + abs(b-d)<<" "<<b<<" "<<c+ abs(b-d)<<" "<<d<<endl;
 
        }
 
        else if( b==d && a!=c){
            cout<<a<<" "<<b+ abs(a-c)<<" "<<c<<" "<<d+ abs(a-c)<<endl;
        }
 
        else if(abs(a-c) == abs(b-d)){
            cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;
 
        }else cout<<-1<<endl;
    }
}