#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    ll ans = a[1];

    for(int i=2;i<=n;i++){
        ans++;
        ans += (a[i]-1)*i;
    }

    cout<<ans;

    return 0;
}
