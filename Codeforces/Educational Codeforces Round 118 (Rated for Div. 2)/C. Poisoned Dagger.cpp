#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(ll m, ll n, ll a[], ll h){

    ll damage = 0;
    for(ll i=0;i<n-1;i++){
        damage += min(a[i+1]-a[i],m);
        if(damage>=h){
            return true;
        }
    }

    damage += m;

    if(damage>=h){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n,h;
        
        cin>>n>>h;

        ll a[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll l = 0, r = 1e18;

        while(l+1<r){

            ll m = l + (r-l)/2;

            if(isGood(m,n,a,h)){
                r = m;
            }else{
                l = m;
            }
        }

        cout<<r<<"\n";
    }

    return 0;
}
