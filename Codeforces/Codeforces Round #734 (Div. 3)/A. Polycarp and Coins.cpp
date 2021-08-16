#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a = n/3;
    ll b = a+1;

    if((n-a)&1){
        cout<<b<<" "<<(n-b)/2<<endl;
    }else{
        cout<<a<<" "<<(n-a)/2<<endl;
    }


  }

  return 0;

}
