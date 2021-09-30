#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l1,r1,l2,r2,k;

    cin>>l1>>r1>>l2>>r2>>k;

    ll l = max(l1,l2);
    ll r = min(r1,r2);

    if(l<=r){
        ll ans = r-l+1;
        if(k>=l && k<=r){
            ans--;
        }
        cout<<ans;
    }else{
        cout<<0;
    }

    return 0;
}
