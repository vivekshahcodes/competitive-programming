#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b,c,n;

    cin>>a>>b>>c>>n;

    ll rem = (a+b+c+n)%3;

    ll div = (a+b+c+n)/3;

    if(rem==0 && a<=div && b<=div && c<=div){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
