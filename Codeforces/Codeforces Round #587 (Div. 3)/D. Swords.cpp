#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){

    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;

    ll a[n],m=0;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        m = max(m,a[i]);
    }

    ll g = 0ll;

    for(ll i=0;i<n;i++){
        ll x = m-a[i];
        g = gcd(x,g);
    }

    ll ans = 0;

    for(ll i=0;i<n;i++){
        ll x = m-a[i];
        ans += x/g;
    }

    cout<<ans<<" "<<g;

    return 0;
}
