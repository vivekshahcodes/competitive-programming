#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m;

    cin>>n>>m;

    ll q = n/m;
    ll r = n%m;

    vector<ll> pattern;

    ll x = (m+1)/2;
    ll d = 1;
    pattern.push_back(x);

    if(m&1){
        while((x-d)>0){
            pattern.push_back(x-d);
            pattern.push_back(x+d);
            d++;
        }
    }else{
        while((x-d)>0){
            pattern.push_back(x+d);
            pattern.push_back(x-d);
            d++;
        }
        pattern.push_back(m);
    }

    for(ll i=0;i<q;i++){

        for(ll i:pattern){
            cout<<i<<"\n";
        }   
    }

    for(ll i=0;i<r;i++){
        cout<<pattern[i]<<"\n";
    }

    return 0;
}
