#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    int found = 0;
    for(int i =0;i<n;i++){
        if(a[i]!=b[i]){
            found = 1;
            
        }
    }
    if(found ==1 ){
        cout<<"rated"<<endl;
    }
    if(found == 0){
        int f =0;
        for(int i =1 ;i<n;i++){
            if(a[i]>a[i-1]){
                f = 1;
                break;
            }
        }
        if(f == 1)cout<<"unrated"<<endl;
        else cout<<"maybe"<<endl;
 
    }
}