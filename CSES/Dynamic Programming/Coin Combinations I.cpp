#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll const m = 1e9+7;

ll dp[1000001];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;
    cin>>n>>k;

    ll a[n];
    
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    dp[0] = 1;

    for(ll i=1;i<=k;i++){
        for(ll j=0;j<n;j++){
            if(i-a[j]>=0){
                if(dp[i] + dp[i-a[j]] >= m){
                    dp[i] = dp[i] + dp[i-a[j]] - m;
                }else{
                    dp[i] += dp[i-a[j]];
                }
            }
        }
    }

    cout<<dp[k];

    return 0;
}
