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

        ll n;

        cin>>n;

        ll a[n+2];
        map<ll,ll> m;
        ll total = 0;

        for(ll i=0;i<n+2;i++){
            cin>>a[i];
            total += a[i];
            m[a[i]]++;
        }

        bool ans = false, flag = true;

        for(ll i=0;i<n+2;i++){

            ll x = total - a[i];

            if(x%2==0 && m[x/2] && (a[i]!=x/2 || m[x/2]>1)){

                ans = true;

                for(ll j=0;j<n+2;j++){
                    if(j==i){
                        continue;
                    }else if(a[j]==(x/2) && flag){
                        flag = false;
                        continue;
                    }else{
                        cout<<a[j]<<" ";
                    }
                }

                break;                
            }
        }

        if(!ans){
            cout<<-1;
        }

        cout<<endl;
    }

    return 0;
}
