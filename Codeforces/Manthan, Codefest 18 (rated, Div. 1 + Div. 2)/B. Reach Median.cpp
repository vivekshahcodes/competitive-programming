#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    ll ans = 0;

    if(a[n/2]>k){
        for(int i=0;i<=n/2;i++){
            ans += max(0ll,a[i]-k);
        }
    }else if(a[n/2]<k){
        for(int i=n/2;i<n;i++){
            ans += max(k-a[i],0ll);
        }
    }

    cout<<ans;

    return 0;
}
