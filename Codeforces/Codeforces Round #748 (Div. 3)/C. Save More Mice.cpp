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

        ll a[k];

        for(ll i=0;i<k;i++){
            cin>>a[i];
        }

        sort(a,a+k,greater<int>());

        ll total = 0, ans = 0;

        for(ll i=0;i<k;i++){
            total += n-a[i];
            ans++;
            if(total==n-1){
                break;
            }else if(total>n-1){
                ans--;
                break;
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
