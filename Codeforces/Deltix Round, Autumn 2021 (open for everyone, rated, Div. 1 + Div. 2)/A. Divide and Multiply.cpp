#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b>0){

        if (b&1){
            res = res * a;
        }    
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        ll a[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        ll p = 0, ans = 0;

        for(ll i=0;i<n;i++){
            ll x = __builtin_ctzll(a[i]);
            p += x;
            a[i] = (a[i]>>x);
        }

        sort(a,a+n);

        for(ll i=0;i<n-1;i++){
            ans += a[i];
        }

        cout<<ans+binpow(2,p)*a[n-1]<<"\n";
    }

    return 0;
}
