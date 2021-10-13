#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[56] = {0};
    a[0] = 0;

    for(ll i=1;i<=55;i++){
        a[i] += a[i-1]+(1ll<<i);
    }

    cout<<a[n];

    return 0;
}
