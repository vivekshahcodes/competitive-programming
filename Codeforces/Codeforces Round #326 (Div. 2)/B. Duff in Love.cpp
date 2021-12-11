#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isLovely(ll n){

    if(n==1) return true;

    for(ll i=2;i*i<=n;i++){
        if(n%(i*i)==0){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    vector<ll> factors;

    factors.push_back(1);
    factors.push_back(n);

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            factors.push_back(i);
            if(i!=(n/i)){
                factors.push_back(n/i);
            }
        }
    }

    sort(factors.rbegin(),factors.rend());

    for(ll i=0;i<factors.size();i++){
        if(isLovely(factors[i])){
            cout<<factors[i];
            break;
        }
    }

    return 0;
}
