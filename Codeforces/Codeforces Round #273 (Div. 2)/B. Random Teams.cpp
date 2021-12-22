#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    ll x = n/k;
    ll y = n%k;
    
    ll f = y*((x*(x+1))/2);
    x--;
    ll s = (k-y)*((x*(x+1))/2);

    cout<<f+s<<" ";

    ll a = n-k+1;
    a--;

    cout<<(a*(a+1))/2;

    return 0;
}
