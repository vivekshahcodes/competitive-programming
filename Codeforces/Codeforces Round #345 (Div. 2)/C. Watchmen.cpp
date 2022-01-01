#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;

    map<ll,ll> f,s;
    map<pair<ll,ll>,ll> c;
    ll common = 0;

    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        f[a]++;
        s[b]++;
        c[{a,b}]++;       
    }

    ll ans = 0;

    for(auto i:f){
        ll x = i.second;
        x--;
        ans += (x*(x+1))/2;
    }

    for(auto i:s){
        ll x = i.second;
        x--;
        ans += (x*(x+1))/2;
    }

    for(auto i:c){
        ll x = i.second;
        x--;
        ans -= (x*(x+1))/2;
    }

    cout<<ans;

    return 0;
}
