#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll m = 1e9+7;
ll dp[1000005];

ll ways(ll n){

    if(n==0){
        return 1;
    }

    if(dp[n]){
        return dp[n];
    }

    ll ans = 0;

    for(ll i=1;i<=6;i++){
        if(n-i>=0){
            ans = (ans + ways(n-i))%m;
        }
    }

    return dp[n] = ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    cout<<ways(n)%m;

    return 0;
}
