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

        ll a[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll ans = 0;

        for(ll k=3;k<=n;k++){
            ll i = 0, j = k-1;
            while(j<n){

                ll x = upper_bound(a+i+1,a+j,(a[i]+a[j])/2)-a;
                ll y = lower_bound(a+i+1,a+j,(a[i]+a[j])/2)-a;
                
                ll temp = 0;
                
                if(x==y){
                    if(x==j){
                        x--;
                        temp = max(temp,(a[x]-a[i])*(a[j]-a[x]));
                    }else{
                        temp = max(temp,(a[x]-a[i])*(a[j]-a[x]));
                        if(x-1>i){
                            x--;
                            temp = max(temp,(a[x]-a[i])*(a[j]-a[x]));
                        }
                    }
                }else{
                    if(x==j){
                        temp = max(temp,(a[y]-a[i])*(a[j]-a[y]));
                    }else{
                        temp = max(temp,(a[x]-a[i])*(a[j]-a[x]));
                    }
                    temp = max(temp,(a[y]-a[i])*(a[j]-a[y]));
                    if(y-1>i){
                        y--;
                        temp = max(temp,(a[y]-a[i])*(a[j]-a[y]));
                    }
                    
                }

                ans += temp;

                i++;
                j++;
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
