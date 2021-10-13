#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n], ans = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        ans += a[i];
    }

    if(n<=1){
        cout<<ans;
        return 0;
    }

    ll total = ans;
    ans *= 2;

    sort(a,a+n);

    for(int i=0;i<n-2;i++){
        total -= a[i];
        ans += total;
    }

    cout<<ans;

    return 0;
}
