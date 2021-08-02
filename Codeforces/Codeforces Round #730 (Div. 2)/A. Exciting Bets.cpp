#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b;

    cin>>a>>b;

    if(a==b){
        cout<<0<<" "<<0<<endl;
    }else{

        int x = max(a,b)-min(a,b);

        cout<<x<<" "<<min(max(a,b)%x,x-max(a,b)%x)<<endl;
    }

  }

  return 0;

}
