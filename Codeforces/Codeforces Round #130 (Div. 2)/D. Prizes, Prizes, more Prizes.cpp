#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll b[5];
    map<ll,ll> m;

    for(ll i=0;i<5;i++){
        cin>>b[i];
    }

    ll points = 0;

    for(ll i=0;i<n;i++){

        points += a[i];

        for(ll i=4;i>=0;i--){

            ll x = points/b[i];
            points -= x*b[i];
            m[b[i]] += x;
        }
    }

    for(ll i=0;i<5;i++){
        cout<<m[b[i]]<<" ";
    }

    cout<<endl;

    cout<<points;

    return 0;
}
