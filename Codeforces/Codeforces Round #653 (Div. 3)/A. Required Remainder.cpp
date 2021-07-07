#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b,c;

    cin>>a>>b>>c;

    if(c%a<b){
      c+=b-(c%a);
      c-=a;
    }else if(c%a>b){
      c-=(c%a)-b;
    }

    cout<<c<<endl;

  }

  return 0;

}
