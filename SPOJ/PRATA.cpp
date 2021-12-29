#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(ll k, map<ll,ll> m, ll n){

    ll p = 0;

    for(ll i=1;i<=8;i++){

        if(m[i]>0){

            ll time = 0;
            ll mul = 1;
            ll currP = 0;

            while(time+i*mul<=k){
                time+=i*mul;
                mul++;
                currP++;
            }

            p += currP*m[i];

        }
    }
    if(p>=n){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;

    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        ll x;
        cin>>x;

        map<ll,ll> m;

        for(ll i=0;i<x;i++){
            ll input;
            cin>>input;
            m[input]++;
        }

        ll l = -1, r = 1e9;

        while(l+1<r){

            ll mid = l+(r-l)/2;

            if(isGood(mid,m,n)){
                r = mid;
            }else{
                l = mid;
            }

        }

        cout<<r<<"\n";
    }

    return 0;
}
