#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll ans = 0;

    for(ll i=0;i<n-1;i++){
        ans = max(ans,a[i]*a[i+1]);
    }

    cout<<ans<<endl;

  }

  return 0;

}
