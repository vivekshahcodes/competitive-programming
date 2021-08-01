#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b,c;

    cin>>a>>b>>c;

    cout<<a+b+c-min(a,min(b,c))<<endl;

  }

  return 0;

}
