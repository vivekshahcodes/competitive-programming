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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    if(k==1){
        cout<<n;
    }else{
        ll d = 0, x = n;
        while(x){
            x = (x>>1);
            d++;
        }

        cout<<binpow(2,d)-1;
    }

    return 0;
}
