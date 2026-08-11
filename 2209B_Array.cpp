#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i =0 ;i<n;i++){
            cin>>a[i];
        }
        long long count1 = 0 ;
        long long count2 = 0;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]!=a[i] && a[j]>a[i] ){
                    count1++;
                }
                else if(a[j]!=a[i] && a[i]>a[j] ){
                    count2++;
 
                }
            }
             cout<<max(count1,count2)<<" ";
                count1 =0;
                count2=0;
        }
        cout<<endl;
    }
}