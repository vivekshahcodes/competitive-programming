#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    ll a[k];

    for(ll i=0;i<k;i++){
        cin>>a[i];
    }

    ll ans = a[0]-1;

    for(ll i=1;i<k;i++){
        if(a[i]>a[i-1]){
            ans += a[i]-a[i-1];
        }else if(a[i]<a[i-1]){
            ans += n-a[i-1] + a[i];
        }
    }

    cout<<ans;

    return 0;
}
