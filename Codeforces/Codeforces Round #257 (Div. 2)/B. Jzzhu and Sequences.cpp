#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,y,m=1e9+7;

    cin>>x>>y;

    ll n;
    
    cin>>n;

    n%=6;
    ll ans;

    if(n==0){
        ans = (x-y)%m;
    }else if(n==1){
        ans = x%m;
    }else if(n==2){
        ans = y%m;
    }else if(n==3){
        ans = (y-x)%m;
    }else if(n==4){
        ans = (-x)%m;
    }else{
        ans = (-y)%m;
    }

    if(ans>=0){
        cout<<ans;
    }else{
        cout<<ans+m;
    }

    return 0;
}
