#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum = 0;
    int sumb = 0;
    int count = 0;
    if(n == 2 && arr[0]!= arr[1]) cout<<1<<endl;
    else if(n==1) cout<<1<<endl;
    else if(n==2 && arr[0]==arr[1])cout<<2<<endl;
    else{
    for(int i = n-1 ; i>=1;i--){
        for(int j =0 ;j<i;j++){
            sum += arr[j];
        }
        sumb += arr[i];
        count++ ;
        if(sum < sumb){
            cout<<count<<endl;
            break ;
        }
        sum = 0 ;
    }
}
return 0 ;
}