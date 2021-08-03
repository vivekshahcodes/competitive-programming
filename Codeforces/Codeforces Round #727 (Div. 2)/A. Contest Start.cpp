#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n,x,t;

    cin>>n>>x>>t;

    ll a = max(0ll,n-(t/x));

    ll ans = a*(t/x);

    ll b = min(n-1,t/x - 1);

    ans += (b*(b+1))/2;

    cout<<ans<<endl;

  }

  return 0;

}
