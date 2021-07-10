#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b>0){

        if (b&1){
            res = res * a;
        }    
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){

  ll t;

  cin>>t;

  while(t--){

    ll w,h,n;

    cin>>w>>h>>n;

    ll c;

    ll a = __builtin_ctzll(w);
    ll b = __builtin_ctzll(h);

    if(a==0&&b==0){
        c = 1;
    }else if(a>0&&b==0){
        c = binpow(2,a);
    }else if(b>0&&a==0){
        c = binpow(2,b);
    }else{
        c = binpow(2,a)*binpow(2,b);
    }

    if(c>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
