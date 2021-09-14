#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    ll l=0,r=n-1;
    ll x=0,y=0;

    bool horizontal = true;

    while(l<=r){
        if(horizontal){
            x += a[r];
            r--;
            horizontal = false;
        }else{
            y += a[l];
            l++;
            horizontal = true;
        }
    }

    cout<<(x*x)+(y*y);

    return 0;
}
