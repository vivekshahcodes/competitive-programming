#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    if(n&1 || n/4==0){
        cout<<0;
    }else{
        ll x = n/4;
        if(n%4==0){
            x--;
        }
        cout<<x;
    }

    return 0;
}
