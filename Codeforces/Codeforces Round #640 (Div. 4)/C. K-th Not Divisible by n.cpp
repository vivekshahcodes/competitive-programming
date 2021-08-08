#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n,k;

    cin>>n>>k;

    cout<<(k-1)/(n-1) + k<<endl;

  }

  return 0;

}
