#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin>>n;
    for(int i =1;i<=n;i++){
        if(n%2== 0 && i==n) cout<<"I love it"<<endl;
        else if(n%2!=0 && i ==n)  cout<<"I hate it"<<endl;
        else if(i%2!=0) cout<<"I hate that ";
        else cout<<"I love that ";
    }
}