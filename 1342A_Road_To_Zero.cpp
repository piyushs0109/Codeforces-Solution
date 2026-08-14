#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long x,y;
        cin>>x>>y;
 
        long long dif = abs(n-m);
 
        long long result =0;
        long long resultf =0;
            result += min(n,m)*y;
            result += dif*x;
 
            long long result2 =  (n+m)*x;
 
            resultf = min(result,result2);
 
            cout<<resultf<<endl;
    }
    return 0 ;
}