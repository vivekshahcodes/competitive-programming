#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    set<ll> rows,columns;

    for(ll i=0;i<k;i++){
        ll a,b;
        cin>>a>>b;
        rows.insert(a);
        columns.insert(b);
        ll r = rows.size();
        ll c = columns.size();
        cout<<(n-r)*(n-c)<<" ";
    }

    return 0;
}
