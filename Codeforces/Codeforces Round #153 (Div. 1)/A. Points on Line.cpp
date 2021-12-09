#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

    if(n<=2){
        cout<<0;
        return 0;
    }

    ll ans = 0;

    for(ll i=0;i<n-2;i++){
        ll x = lower_bound(a+i,a+n,a[i]+k)-a;

        if(x==n){
            x--;
        }else if(a[x]!=a[i]+k){
            x--;
        }

        if(a[x]-a[i]>k) continue;
        ll d = x-i-1;
        ans += (d*(d+1))/2;
    }

    cout<<ans;

    return 0;
}
