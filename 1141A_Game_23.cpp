#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x , y;
    cin>>x>>y;
    if(y == x) cout<<0<<endl;
    else if(y%x != 0) cout<<-1<<endl;
    else{
            long long  z = y/x;
            long long count = 0;
            while(z != 1){
                if(z%3 == 0){
                    z = z/3 ;
                    count++ ;
                }
                else if(z%2 == 0){
                    z = z/2 ;
                    count++;
                }
                if(z == 1) break;
                else if(z%2 != 0 && z%3 != 0) {
                count = -1 ;
                break;
                }
            }
            
            cout<<count<<endl;
        }
return 0 ;
}