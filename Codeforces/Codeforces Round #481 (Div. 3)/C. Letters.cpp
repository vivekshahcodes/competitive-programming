#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,q;

    cin>>n>>q;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=1;i<n;i++){
        a[i]+=a[i-1];
    }

    while(q--){

        ll input;
        cin>>input;

        int ind = lower_bound(a,a+n,input)-a;

        cout<<ind+1<<" ";

        if(ind == 0){
            cout<<input<<endl;
        }else{
            cout<<input-a[ind-1]<<endl;
        }
    }

    return 0;
}
