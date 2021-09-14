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

        ll n,k;

        cin>>n>>k;

        ll a[n], mi = LLONG_MAX, ma = 0ll;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            mi = min(a[i],mi);
            ma = max(a[i],ma);
        }

        if(mi+k>=ma-k){
            cout<<mi+k<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
