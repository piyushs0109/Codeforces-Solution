#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1) cout<<n<<endl;
        else  if(n%2 != 0){
            long long i=0;
            while(i!=n){
                cout<<n<<" ";
                i++ ;
            }
            cout<<endl;
        }
        else  if(n%2 == 0){
                long long j=0;
                while(j != n-2){
                    cout<<2<<" ";
                    j++;
                }
                cout<<1<<" "<<3<<endl;
            }
 
        }
        return 0 ;
    }