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
        long double k;

        cin>>n>>k;

        ll ans = 0, a[n], b[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
            b[i] = a[i];
        }

        for(ll i=1;i<n;i++){
            b[i] += b[i-1];
        }

        for(ll i=n-1;i>0;i--){

            if(100*a[i] > k*(b[i-1]+ans)){

                ans += ceil(((100*a[i])-k*(b[i-1]+ans))/k);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}
