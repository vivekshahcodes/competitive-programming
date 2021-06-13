#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,m;

    cin>>n>>m;

    ll a[n+1],b[n+1];

    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }

    b[1] = a[1];

    for(ll i=2;i<=n;i++){
        b[i] = a[i] + b[i-1];
    }

    while(m--){

        ll input;
        cin>>input;

        ll it = lower_bound(b+1,b+n+1,input)-b;

        if(it==1){
            cout<<it<<" "<<input<<endl;
        }else{
            cout<<it<<" "<<input-b[it-1]<<endl;
        }
    }



    return 0;
}
