#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    
    while(cin>>n){

        if(n==-1){
            break;
        }

        ll a[n];

        ll total = 0;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            total += a[i];
        }

        if(total%n!=0){
            cout<<-1<<"\n";
        }else{

            ll avg = total/n;
            ll ans = 0;
            ll sum = 0;

            for(ll i=0;i<n;i++){
                sum+=a[i];
                ans = max(ans,abs((ll)sum-avg*(i+1)));
            }

            cout<<ans<<"\n";
        }
    }

    return 0;
}
