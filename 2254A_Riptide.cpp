#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int a, b ,c;
        cin>>a>>b>>c;
 
        int count = 0;
        while( a!=b && b!=c && a!=c){
            if(a<b && a<c && b>a && b>c ) a++, b--, count++ ;
            else if(a<b && a<c && c>a && c>b) a++,c--, count++;
            else if(b<a && b<c && a>b && a>c) b++ , a--,count++ ;
            else if(b<a && b<c && c>a && c>b) b++ , c--,count++ ;
            else if(c<a && c<b && a>b && a>c) c++ , a-- ,count++;
             else if(c<a && c<b && b>a && b>c) c++ , b--, count++;
        
        }
        cout<<count<<endl;
    }
    return 0 ;
}