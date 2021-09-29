#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b,ans=0;

    cin>>a>>b;

    while(a>0 && b>0){

        ll x = min(a,b);
        ll y = max(a,b);

        ans += y/x;

        y = y%x;

        a = x;
        b = y;        
    }

    cout<<ans;

    return 0;
}
