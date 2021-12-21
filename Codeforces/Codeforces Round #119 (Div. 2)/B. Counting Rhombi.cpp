#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,y;

    cin>>x>>y;

    ll ans = 0;

    for(ll i=2;i<=x;i+=2){
        for(ll j=2;j<=y;j+=2){
            ans += (x-i+1)*(y-j+1);
        }
    }

    cout<<ans;

    return 0;
}
