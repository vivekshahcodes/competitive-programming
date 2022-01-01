#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[1000001];

ll minCoins(ll a[], ll n, ll k){

    if(k==0){
        return 0;
    }

    if(dp[k]){
        return dp[k];
    }

    ll ans = INT_MAX;

    for(ll i=0;i<n;i++){
        if(k-a[i]>=0){
            ans = min(ans,minCoins(a,n,k-a[i])+1);
        }
    }

    return dp[k] = ans;
}

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

    ll ans = minCoins(a,n,k);

    if(ans==INT_MAX){
        cout<<-1;
    }else{
        cout<<ans;
    }

    return 0;
}
