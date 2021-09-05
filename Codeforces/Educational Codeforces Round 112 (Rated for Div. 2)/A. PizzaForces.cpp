#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    if(n&1){
        n++;
    }

    cout<<max((n/2)*5,15ll)<<endl;

  }

  return 0;

}
