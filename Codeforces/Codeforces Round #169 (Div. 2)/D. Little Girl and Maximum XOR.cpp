#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin>>a>>b;

    ll ind = 0, maxInd = -1;

    while(a>0 || b>0){

        if((a&1) != (b&1)){
            maxInd = max(maxInd,ind);
        }

        ind++;
        a = a>>1;
        b = b>>1;

    }

    if(maxInd==-1){
        cout<<0;
    }else{
        ll ans = 0;
        for(ll i=0;i<=maxInd;i++){
            ans |= (1ll<<i);
        }
        cout<<ans;
    }

    return 0;
}
