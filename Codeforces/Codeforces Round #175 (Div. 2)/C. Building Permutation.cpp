#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n+1];

    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1);

    ll ans = 0;

    for(ll i=1;i<=n;i++){
        ans += abs(i-a[i]);
    }

    cout<<ans;

    return 0;
}
