#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long x;
    if(b%c == 0) x = b/c;
    else x = (b/c)+1;
    long long n;
    n = x*a;
    long long m;
    if(n%d == 0) m = n/d;
    else m = n/d + 1;
    cout<<m<<endl;
}