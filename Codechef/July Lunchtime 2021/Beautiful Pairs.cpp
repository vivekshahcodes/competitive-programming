#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    map<ll,ll> m;

    for(ll i=0;i<n;i++){
        ll input;
        cin>>input;
        m[input]++;
    }

    ll ans = 0;

    for(auto i:m){
        ans+=(n-i.second)*i.second;
    }

    cout<<ans<<endl;


  }

  return 0;

}
