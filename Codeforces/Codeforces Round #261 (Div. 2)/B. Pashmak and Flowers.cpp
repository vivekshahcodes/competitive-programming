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
    map<ll,ll> m;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    sort(a,a+n);

    cout<<a[n-1]-a[0]<<" ";

    if(a[n-1]==a[0]){
        ll x = m[a[0]]-1;
        cout<<(x*(x+1))/2;
    }else{
        cout<<m[a[n-1]]*m[a[0]];
    }

    return 0;
}
