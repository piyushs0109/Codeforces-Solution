#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long result =0;
        
        for(int i =0;i<n;i++){
            cin>>a[i];
        
             if(a[i]>=2*a[0]){
                result += (a[i]-1)/(2*a[0]-1);
 
            }
        }
        cout<<result<<endl;
    }
    return 0;
}