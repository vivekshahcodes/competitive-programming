#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a[2*n];

    for(ll i=0;i<2*n;i++){
        cin>>a[i];
    }

    sort(a,a+2*n);

    for(ll i=0;i<n;i++){
        cout<<a[i]<<" "<<a[2*n-(i+1)]<<" ";
    }

    cout<<endl;

  }

  return 0;

}
