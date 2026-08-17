#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        long long n ,m;
        cin>>n>>m;
        char a[n];
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            a[i]=s[0];
        }
        int j ;
        int nfound =0;
        for(int k =0;k<m;k++){
            string p;
            cin>>p;
            for(int i=0;i<p.size();i++){
                int found =0;
                for(j =0;j<n;j++){
                    if(p[i] == toupper(a[j]) ){
                        found =1;
                    }
                    else if(j==n-1 && found==0){   
                        nfound =1;
                        break;
 
                    }
                }
            }
            
        }
        if(nfound==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}