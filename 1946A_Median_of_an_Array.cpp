#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long m =0;
        if(n%2 == 0) m =n/2;
        else m = (n/2) + 1;
        long long count=0;
        for(int i =m-1;i<n;i++){
            if(a[m-1]==a[i]) count++;
        }
        
        cout<<count<<endl;
    }
    return 0;
}