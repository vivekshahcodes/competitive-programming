#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k,m=998244353;
    cin>>n>>k;

    ll total = 0, prev = 0, ans = 1;

    for(ll i=1;i<=n;i++){
        ll input;
        cin>>input;
        if(input>n-k){
            total += input;
            if(prev!=0) ans = (ans*(i-prev))%m;
            prev = i;
        }
    }

    cout<<total<<" "<<ans;

    return 0;
}
