#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;
    cin>>n>>k;

    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }

    ll pref[n+1];
    pref[0] = 0;

    for(ll i=1;i<=n;i++){
        pref[i] = pref[i-1]+a[i];
    }

    while(k--){

        ll l,r;
        cin>>l>>r;

        cout<<pref[r]-pref[l-1]<<"\n";
    }

    return 0;
}
