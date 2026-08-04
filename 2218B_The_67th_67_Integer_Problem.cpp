#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[7];
        for(int i =0 ;i<7;i++){
            cin>>a[i];
        }
        for(int i = 6 ;i>=0;i--){
            for(int j = 0 ;j<i;j++){
                if(a[j]>a[i]){
                    int temp = a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        
        int sum =0;
        for(int i =0 ;i<6;i++){
            sum += a[i];
        }
        int result = a[6] - sum ;
        cout<<result<<endl;
 
    }
}