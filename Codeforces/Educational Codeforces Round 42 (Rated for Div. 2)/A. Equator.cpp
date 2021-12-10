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
    ll total = 0;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        total += a[i];
    }

    ll half = (total+1)/2;
    ll x = 0;

    for(ll i=0;i<n;i++){
        x+=a[i];
        if(x>=half){
            cout<<i+1;
            break;
        }
    }

    return 0;
}
