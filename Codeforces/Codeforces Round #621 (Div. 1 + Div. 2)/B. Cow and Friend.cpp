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

        ll n,k;

        cin>>n>>k;

        ll a[n];
        ll m = 0;
        bool flag = false;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            m = max(m,a[i]);
            if(a[i]==k){
                flag = true;
            }
        }

        if(flag){
            cout<<1<<"\n";
        }else{
            cout<<max(2ll,(k+m-1)/m)<<"\n";
        }

    }

    return 0;
}
