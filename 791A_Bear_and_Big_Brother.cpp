#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   float a,b;
   cin>>a>>b;
   long long year =0;
   for(int i=0;i<10000;i++){
     a *= 1.5 ;
     year++;if(a>b) break;
   }
   cout<<year<<endl;
}