#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin>>n;
    long long a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int i =0;
    int j = n-1;
    int s =0;
    int d =0;
    int sturn = 1;
    while(i<n && j>=i){
      if(sturn) {
        if(a[i]>=a[j]) {
            s += a[i];
            i++;
        }
        else {
            s += a[j];
            j--;
        }
      } 
      else {
         if(a[i]>=a[j]) {
            d += a[i];
            i++;
        }
        else {
            d += a[j];
            j--;
        }
 
 
      }
      sturn = !sturn ;   
    }
    cout<<s<<" "<<d<<endl;
}