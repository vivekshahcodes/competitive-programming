#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b;

    cin>>a>>b;

    ll diff = abs(a-b);

    if(diff%10==0){
        cout<<diff/10<<endl;
    }else{
        cout<<diff/10+1<<endl;
    }

  }

return 0;

}
