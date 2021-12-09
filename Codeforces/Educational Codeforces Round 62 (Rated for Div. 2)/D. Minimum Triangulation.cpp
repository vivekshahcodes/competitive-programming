#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll ans = 0;

    for(ll i=3;i<=n;i++){
        ans += (i-1)*i;
    }

    cout<<ans;

    return 0;
}
