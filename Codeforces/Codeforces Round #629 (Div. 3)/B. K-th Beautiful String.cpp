#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(ll m, ll k){

    ll x = m*(m+1);

    if((x/2)<=k){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n,k;

        cin>>n>>k;

        ll l = 0, r = k+1;

        while(l+1<r){

            ll m = l + (r-l)/2;

            if(isGood(m,k)){
                l = m;
            }else{
                r = m;
            }
        }

        ll x = (l*(l+1))/2;
        ll first, second;

        if(k==x){
            first = n-l-1;
            second = n-l;
        }else{
            ll diff = k-x;
            first = n-l-2;
            second = n-diff;
        }

        string ans;

        for(ll i=0;i<n;i++){
            ans.push_back('a');
        }

        ans[first] = 'b';
        ans[second] = 'b';

        cout<<ans<<"\n";

    }

    return 0;
}
