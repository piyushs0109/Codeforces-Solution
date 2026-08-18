#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long l,r,d;
        cin>>l>>r>>d;
        long long result=0;
        if(d>=l && d<=r){
            result = ((r/d)+1)*d;
        }
        else if(d>r){
            result = d;
        }
        else if(d<l){
            result = d;
 
        }
        cout<<result<<endl;
    }
    return 0;
}