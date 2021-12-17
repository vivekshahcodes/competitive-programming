#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n, k;

        cin>>n>>k;

        ll a[n];
        vector<pair<ll,ll>> v;
        ll m = 0, ind = 0;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>m){
                m = a[i];
                ind = i+1;
            }
            v.push_back({m,ind});
        }

        ll total = 0, i = 0;

        while(i<n && total+a[i]<=k){
            total += a[i];
            i++;
        }

        if(i==n){
            cout<<0<<"\n";   
        }else{
            ll x = v[i].first;
            if(a[i]<=x){
                cout<<v[i].second<<"\n";
            }else{
                cout<<0<<"\n";
            }
        }
    }

    return 0;
}
