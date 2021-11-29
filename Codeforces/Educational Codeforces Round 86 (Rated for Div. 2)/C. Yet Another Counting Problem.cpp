#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll a,b,q;

        cin>>a>>b>>q;

        ll arr[(a*b)+1] = {0};

        for(ll i=1;i<=a*b;i++){
            if((i%a)%b != (i%b)%a){
                arr[i] = arr[i-1] + 1;
            }else{
                arr[i] = arr[i-1];
            }
        }

        while(q--){

            ll l,r;
            cin>>l>>r;

            l-=1;

            ll x = l/(a*b);
            ll y = r/(a*b);

            ll first = y*arr[(a*b)] + arr[r-(a*b*y)];
            ll second = x*arr[(a*b)] + arr[l-(a*b*x)];

            cout<<first-second<<" ";

        }

        cout<<endl;
    }

    return 0;
}
