#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a;

    if(ceil(sqrt(n))==floor(sqrt(n))){
        a = sqrt(n);
    }else{
        a = floor(sqrt(n))+1;
    }

    ll x = a, y = 1, curr = a*a;

    bool horizontal = true;

    while(curr!=n){
        if(horizontal){
            curr--;
            y++;
            if(y==a){
                horizontal = false;
            }
        }else{
            curr--;
            x--;
        }
    }

    cout<<x<<" "<<y<<endl;

  }

  return 0;

}
