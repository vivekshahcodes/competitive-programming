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
    ll y = n%3;

    if(y==0){
        cout<<x<<" "<<x<<endl;
    }else if(y==1){
        cout<<x+1<<" "<<x<<endl;
    }else{
        cout<<x<<" "<<x+1<<endl;
    }

  }

  return 0;

}
