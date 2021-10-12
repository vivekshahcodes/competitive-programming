#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll m = 1000000007;

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b>0){

        if (b&1){
            res = (res * a)%m;
        }    
        a = (a * a)%m;
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

        ll n,k;

        cin>>n>>k;

        ll ans = 0;

        ll i = 0;

        while(k>0){
            if(k&1){
                ans = (ans + binpow(n,i))%m;
            }
            k = k>>1;
            i++;
        }

        cout<<ans<<"\n";

    }

    return 0;
}
