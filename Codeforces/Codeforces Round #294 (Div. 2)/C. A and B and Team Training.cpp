#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin>>a>>b;

    ll x = min(a,b);
    ll y = max(a,b);

    ll diff = y-x;

    if(x-diff<0){
        diff = min(x,y/2);
    }

    ll ans = diff;

    x-=diff;
    y-=2*diff;

    ans += (x/3)*2;

    x -= (x/3)*3;

    if(x==2){
        ans++;
    }

    cout<<ans;

    return 0;
}
