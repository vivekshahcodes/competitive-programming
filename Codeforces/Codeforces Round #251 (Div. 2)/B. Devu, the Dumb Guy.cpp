#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,x;

    cin>>n>>x;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    ll ans = 0;

    for(ll i=0;i<n;i++){
        ans += a[i]*x;
        x--;
        if(x<1){
            x = 1;
        }
    }

    cout<<ans;

    return 0;
}
