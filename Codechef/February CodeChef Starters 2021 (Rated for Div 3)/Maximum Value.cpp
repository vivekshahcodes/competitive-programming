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
    
    sort(a,a+n);

    ll x = a[0]*a[1] + (a[1]-a[0]);

    ll y = a[n-1]*a[n-2] + (a[n-1]-a[n-2]);

    cout<<max(x,y)<<endl; 

  }

  return 0;

}
