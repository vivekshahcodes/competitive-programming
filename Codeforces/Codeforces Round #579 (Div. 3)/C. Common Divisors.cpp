#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll factors(ll n){

    ll ans = 0;

    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ans += 2;
        }

        if(i*i==n){
            ans--;
        }
    }

    return ans;
}

ll gcd(ll a, ll b){

    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll g = a[0];

    for(ll i=1;i<n;i++){
        g = gcd(g,a[i]);
    }

    cout<<factors(g);

    return 0;
}
