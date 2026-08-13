#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n;i++){
        cin>>a[i];
    }
    int count =0;
    int mx =0;
    for(int i =0;i<n;i++){
        if(a[i]==1){
            count++;
            mx = max(count,mx);
        }
        if(a[i]==0){
            count =0;
        }
        if( i== n-1 && a[i] == 1){
            for(int j =0; j<n;j++){
                if(a[j]==1) {
                    count++;
                    mx = max(count,mx);
                }
                else break;
            }
        }
 
    }
    cout<<mx<<endl;
}