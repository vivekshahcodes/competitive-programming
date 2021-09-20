#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b,k;

    cin>>a>>b>>k;

    ll x = abs(a)+abs(b);

    if(k>=x && (k&1)==(x&1)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
