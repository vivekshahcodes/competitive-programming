#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool p[90000005] = {false};

void sieve(){

    for(ll i=3;i<=90000000;i+=2){
        p[i] = true;
    }

    for(ll i=3;i*i<=90000000;i+=2){
        if(p[i]==true){
            for(ll j=i*i;j<=90000000;j+=i){
                p[j] = false;
            }
        }
    }

    p[2] = true;
    p[0] = p[1] = false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    vector<ll> primes;

    for(ll i=2;i<=90000000;i++){
        if(p[i]){
            primes.push_back(i);
        }
    }

    int t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        cout<<primes[n-1]<<"\n";

    }

    return 0;
}
