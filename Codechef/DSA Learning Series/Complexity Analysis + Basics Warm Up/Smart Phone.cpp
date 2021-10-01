#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    vector<int> v;

    for(ll i=0;i<n;i++){

        ll input;
        cin>>input;

        v.push_back(input);
    }

    sort(v.begin(),v.end());

    ll ans = 0;

    for(ll i=0;i<n;i++){
        ans = max(ans,(n-i)*v[i]);
    }

    cout<<ans;

    return 0;
}
