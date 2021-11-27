#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    int dp[1100] = {false};
    dp[0] = true;

    for(int i=11;i<=1099;i++){
        if(dp[i-11]){
            dp[i] = true;
        }

        if(i>=111){
            if(dp[i-111]){
                dp[i] = true;
            }
        }
    }

    while(t--){

        int n;

        cin>>n;

        if(n>1099){
            cout<<"YES"<<endl;
        }else{
            if(dp[n]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
