#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    long long tc = 0;
    tc = (w*(w+1))/2 * k ;
    
    if(tc<n) cout<<0<<endl;
    else cout<<tc-n<<endl;
}