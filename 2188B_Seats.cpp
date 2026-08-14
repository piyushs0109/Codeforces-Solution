#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c = 1;
        int result =0;
        if(n<3) result = 1;
        else {
            for(int i =0;i<n;i++){
            if(s[i] == '0'){
                c++;
                if(c==2 && i==n-1){
                    result++;
                }
                else if(c == 3){
                    result++;
                    c=0;
                }
            }
            if(s[i] =='1'){
                result++;
                c =0;
            }
 
        }
    }
     cout<<result<<endl;
}
return 0;
}