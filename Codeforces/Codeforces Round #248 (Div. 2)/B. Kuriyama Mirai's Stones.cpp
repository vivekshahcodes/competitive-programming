#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n+1],b[n+1],c[n+1];
    a[0] = b[0] = c[0] = 0;

    for(ll i=1;i<=n;i++){
        cin>>a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    for(ll i=2;i<=n;i++){
        b[i] += b[i-1];
    }

    sort(c+1,c+n+1);

    for(ll i=2;i<=n;i++){
        c[i] += c[i-1];
    }

    ll q;

    cin>>q;

    while(q--){

        ll type,l,r;
        cin>>type>>l>>r;

        if(type==1){
            cout<<b[r]-b[l-1]<<endl;
        }else{
            cout<<c[r]-c[l-1]<<endl;
        }
    }

    return 0;
}
