#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
  long long n,m;
  cin>>n>>m;
  long long a[m];
  long long result =0;
  for(int i =0;i<m;i++){
    cin>>a[i];
    if(i == 0){
        result = a[i]-1;
    }
    else if(a[i]>=a[i-1]){
        result += a[i]-a[i-1];
 
    }
    else if(a[i]<a[i-1]){
        result += n-a[i-1]+a[i];
    }
    
  }
  cout<<result<<endl;
}