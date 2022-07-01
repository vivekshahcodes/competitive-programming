#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n,m;
        cin>>n>>m;

        ll ans = (m*(m+1))/2;

        for(ll i=2*m;i<=m*n;i+=m){
            ans += i;
        }

        cout<<ans<<"\n";
    }
    
    return 0;
}
