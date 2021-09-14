#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n], total = 0;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }

    sort(a,a+n,greater<ll>());

    ll b[n];

    for(ll i=0;i<n;i++){
        b[i] = total - a[i];
    }

    ll q;
    
    cin>>q;

    while(q--){

        ll x;

        cin>>x;

        cout<<b[x-1]<<endl;
    }

    return 0;
}
