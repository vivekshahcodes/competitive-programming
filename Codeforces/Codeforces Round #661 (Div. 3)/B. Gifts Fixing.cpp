#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a[n], b[n], mina = LLONG_MAX, minb = LLONG_MAX;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        mina = min(mina,a[i]);
    }

    for(ll i=0;i<n;i++){
        cin>>b[i];
        minb = min(minb,b[i]);
    }

    ll ans = 0;

    for(ll i=0;i<n;i++){

        ll tempa = a[i]-mina;
        ll tempb = b[i]-minb;

        ans += max(tempa,tempb);

    }

    cout<<ans<<endl;


  }

  return 0;

}
