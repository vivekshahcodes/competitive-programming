#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){

    if(n<=1){
        return false;
    }

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n,e;

        cin>>n>>e;

        ll a[n+1];
        ll pref[n+1] = {0};

        for(ll i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==1){
                pref[i]++;
            }else if(isPrime(a[i])){
                pref[i] = -1;
            }
        }

        for(ll i=e+1;i<=n;i++){
            if(a[i]==1 && a[i-e]==1){
                pref[i] = pref[i-e] + 1;
            }
        }

        for(ll i=n-e;i>=1;i--){
            if(pref[i]>0 && pref[i+e]>pref[i]){
                pref[i] = pref[i+e];
            }
        }

        ll ans = 0;

        for(ll i=1;i<=n;i++){
            if(pref[i]==-1){
                ll x = i-e;
                ll y = i+e;

                if(x>=1 && y<=n){
                    if(pref[x]>0 && pref[y]>0){
                        ans += pref[x]+pref[y]+(pref[x]*pref[y]);
                    }else if(pref[x]>0){
                        ans += pref[x];
                    }else if(pref[y]>0){
                        ans += pref[y];
                    }
                }else if(x>=1){
                    if(pref[x]>0){
                        ans += pref[x];
                    }
                }else if(y<=n){
                    if(pref[y]>0){
                        ans += pref[y];
                    }
                }
            }
        }

        cout<<ans<<"\n";
        
    }

    return 0;
}
