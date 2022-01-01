#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll> v(n,0);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    vector<pair<pair<ll,ll>,ll>> w;

    for(ll i=0;i<m;i++){
        ll l,r,d;
        cin>>l>>r>>d;
        l--;
        r--;
        w.push_back({{l,r},d});
    }

    vector<ll> pref(m+1,0);

    while(k--){
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        pref[x]++;
        pref[y+1]--;
    }

    for(ll i=1;i<m;i++){
        pref[i]+=pref[i-1];
    }

    vector<ll> finalPref(n+1,0);
    for(ll i=0;i<m;i++){
        w[i].second *= pref[i];
        ll x = w[i].first.first;
        ll y = w[i].first.second;
        finalPref[x]+=w[i].second;
        finalPref[y+1]-=w[i].second;
    }

    for(ll i=1;i<n;i++){
        finalPref[i]+=finalPref[i-1];
    }

    for(ll i=0;i<n;i++){
        cout<<v[i]+finalPref[i]<<" ";
    }    

    return 0;
}
