#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n], pref[n], suff[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
        pref[i] = a[i];
        suff[i] = a[i];
    }

    for(ll i=1;i<n;i++){
        pref[i] += pref[i-1];
    }

    for(ll i=n-2;i>=0;i--){
        suff[i] += suff[i+1];
    }

    ll ans = 0;
    ll l = 0, r = n-1;

    while(l<r){

        if(pref[l]==suff[r]){
            ans = pref[l];
            l++;
            r--;
        }else if(pref[l]<suff[r]){
            l++;
        }else{
            r--;
        }
    }

    cout<<ans;

    return 0;
}
