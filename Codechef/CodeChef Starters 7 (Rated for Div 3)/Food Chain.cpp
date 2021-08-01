#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b,ans=0;

    cin>>a>>b;

    while(a!=0){
        a/=b;
        ans++;
    }

    cout<<ans<<endl;

  }

  return 0;

}
