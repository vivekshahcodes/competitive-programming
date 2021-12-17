#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        ll a[n];

        ll total = 0;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            total += a[i];
        }

        ll curr = 0, ans = 0;

        for(ll i=0;i<n-1;i++){
            curr = max(a[i],curr+a[i]);
            ans = max(ans,curr);
        }

        curr = 0;

        for(ll i=1;i<n;i++){
            curr = max(a[i],curr+a[i]);
            ans = max(ans,curr);
        } 

        if(ans>=total){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        
    }

    return 0;
}
