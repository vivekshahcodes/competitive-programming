#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll x = n/3;
    ll y = x+1;

    ll a = n - (x*2);
    ll b = n - (y*2);

    if(abs(x-a)<abs(y-b)){
        cout<<a<<" "<<x<<endl;
    }else{
        cout<<b<<" "<<y<<endl;
    }

  }

  return 0;

}
