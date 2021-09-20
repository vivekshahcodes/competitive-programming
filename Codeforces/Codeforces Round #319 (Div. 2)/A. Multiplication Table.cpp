#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    ll ans = 0;

    for(ll i=1;i<=n;i++){
        if(k%i==0 && (k/i)<=n){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
