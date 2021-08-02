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
        cout<<2<<" "<<n-1<<endl;
    }else{
        cout<<2<<" "<<n<<endl;
    }

  }

  return 0;

}
