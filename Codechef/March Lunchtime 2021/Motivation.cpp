#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n,x,ans = 0;

    cin>>n>>x;

    for(ll i=0;i<n;i++){
        
        ll s,r;

        cin>>s>>r;

        if(s<=x && r>ans){
            ans = r;
        }

    }

    cout<<ans<<endl;

  }

  return 0;

}
