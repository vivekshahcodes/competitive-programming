#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<string,ll> a, pair<string,ll> b){
    return a.second<b.second;
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

        vector<pair<string,ll>> v;

        for(ll i=0;i<n;i++){
            string a;
            ll b;

            cin>>a>>b;

            v.push_back({a,b});
        }

        sort(v.begin(),v.end(),comp);

        ll ans = 0;

        for(ll i=0;i<n;i++){
            ans += abs(v[i].second-i-1);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
