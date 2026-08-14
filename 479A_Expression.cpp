#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int result = 0;
   if(a==1 && c!= 1 ) result = (a+b)*c ;
   else if(a==1 && c==1) result = a+b+c;
    else if(b==1){
    if(a==1 && c==1) result = a+b+c;
    else if(a==1) result = (a+b)*c ;
    else if(c==1) result = a*(b+c);
    else if(a<=c) result = (a+b)*c ;
    else if(a>c) result = a*(b+c);
   }
   else  if(a!=1 && c== 1 ) result = a*(b+c) ;
   else if(a==1 && c==1) result = a+b+c;
   else{
    result = a*b*c;
   }
   cout<<result<<endl;
 
}