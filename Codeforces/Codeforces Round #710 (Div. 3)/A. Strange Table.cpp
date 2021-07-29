#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n,m,x;

    cin>>n>>m>>x;

    ll r = x%n, c;

    if(x%n==0){
        r = n;
        c = x/n;
    }else{
        c = x/n + 1;
    }

    ll temp = r * m;

    cout<<temp-(m-c)<<endl;

  }

return 0;

}
