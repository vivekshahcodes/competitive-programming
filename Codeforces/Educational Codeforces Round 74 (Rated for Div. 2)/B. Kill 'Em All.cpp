#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;

    cin>>t;

    while(t--){

        ll n,k;

        cin>>n>>k;

        set<ll> s;
        ll ans = 0;

        for(ll i=0;i<n;i++){
            ll input;
            cin>>input;
            s.insert(input);
        }

        ll curr = s.size()-1;

        for(ll i:s){
            ll x = i-(curr*k);
            if(x>0){
                ans++;
            }
            curr--;
        }

        cout<<ans<<"\n";

    }

    return 0;
}
