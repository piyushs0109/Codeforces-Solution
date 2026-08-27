#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   int n;
   cin>>n;
   int sum =0;
   for(int i =0;i<n;i++){
    string s;
    cin>>s;
    if(s == "X++" ) sum++;
    if(s == "++X" ) sum++;
    if(s == "X--" ) sum--;
    if(s == "--X" ) sum--;
   }
   cout<<sum<<endl;
}