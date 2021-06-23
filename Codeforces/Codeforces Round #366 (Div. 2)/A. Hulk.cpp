#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string ans = "";

    for(int i=1;i<=n;i++){
        
        if(i==1){
            if(n&1){
                ans = "I hate it" + ans;
            }else{
                ans = "I love it" + ans;
            }
        }else if(i&1){
            if(n&1){
                ans = "I hate that " + ans;
            }else{
                ans = "I love that " + ans;
            }
        }else{
            if(n&1){
                ans = "I love that " + ans;
            }else{
                ans = "I hate that " + ans;
            }
        }
    }

    cout<<ans;

    return 0;
}
