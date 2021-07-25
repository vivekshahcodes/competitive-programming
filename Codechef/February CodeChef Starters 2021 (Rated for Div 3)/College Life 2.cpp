#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  ll t;

  cin>>t;

  while(t--){

    ll n, time = 0;

    cin>>n;

    int a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
        time+=a[i];
    }

    for(ll i=0;i<n;i++){
        
        ll e;

        cin>>e;

        time-=e*a[i];

        for(ll i=0;i<e;i++){

            int input;

            cin>>input;

            time += input;
        }
    }

    cout<<time<<endl;

  }

  return 0;

}
