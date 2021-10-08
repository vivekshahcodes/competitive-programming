#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sumofdigits(ll n){

    ll ans = 0;

    while(n>0){
        ans += n%10;
        n/=10;
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll ans = 19;

    for(ll i=2;i<=n;i++){
        ans += 9;
        while(sumofdigits(ans)!=10){
            ans += 9;
        }
    }

    cout<<ans;

    return 0;
}
