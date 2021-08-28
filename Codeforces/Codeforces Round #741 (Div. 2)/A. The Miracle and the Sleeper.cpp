#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll l,r;

    cin>>l>>r;

    ll ans = r%l;

    if(r%2==0){
        r--;
    }

    ll a = (r/2)+1;

    if(a>=l){
        ans = max(ans,r%a);
    }

    cout<<ans<<endl;

  }

  return 0;

}
