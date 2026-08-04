#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        string s;
        cin>>s;
        int counta =0 ;
         int countb =0 ;
          int countc =0 ;
           int countd =0 ;
            int counte =0 ;
             int countf =0 ;
              int countg =0 ;
 
        for(int i =0 ;i<n;i++){
            if(s[i]=='A') counta++ ;
            if(s[i]=='B') countb++ ;
            if(s[i]=='C') countc++ ;
            if(s[i]=='D') countd++ ;
            if(s[i]=='E') counte++ ;
            if(s[i]=='F') countf++ ;
            if(s[i]=='G') countg++ ;
        }
        int sum = 0;
        if(counta<m) sum += m - counta;
        if(countb<m) sum += m - countb;
        if(countc<m) sum += m - countc;
        if(countd<m) sum += m - countd;
        if(counte<m) sum += m - counte;
        if(countf<m) sum += m - countf;
        if(countg<m) sum += m - countg;
        cout<<sum<<endl;
    }
    return 0 ;
}