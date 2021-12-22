#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m;

    cin>>n>>m;

    ll a[n][m];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(ll j=1;j<m;j++){
        a[0][j] += a[0][j-1];
    }

    for(ll i=1;i<n;i++){
        a[i][0] += a[i-1][0];
    }

    for(ll j=1;j<m;j++){
        for(ll i=1;i<n;i++){
            a[i][j] += a[i-1][j];

            if(a[i-1][j]<a[i][j-1]){
                a[i][j] += a[i][j-1]-a[i-1][j];
            }
        }
    }

    for(ll i=0;i<n;i++){
        cout<<a[i][m-1]<<" ";
    }

    return 0;
}
