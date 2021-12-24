#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;

    vector<pair<ll,ll>> v;

    ll total = 0;

    for(ll i=0;i<n;i++){
        ll input;
        cin>>input;
        total += input;
        v.push_back({input,i+1});
    }

    sort(v.begin(),v.end());

    vector<ll> ans;

    for(int i=0;i<n-1;i++){
        ll x = total - v[i].first;
        if(x&1) continue;
        if(v[n-1].first==x/2){
            ans.push_back(v[i].second);
        }
    }

    ll x = total - v[n-1].first;

    if(x%2==0 && (x/2)==v[n-2].first){
        ans.push_back(v[n-1].second);
    }

    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}
