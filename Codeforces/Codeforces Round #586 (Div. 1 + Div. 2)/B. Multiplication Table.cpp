#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binarySearch(ll l, ll r, ll x){

    while(l<=r){
        
        ll m = l + (r-l)/2;

        if(m*m==x){
            return m;
        }else if(m*m<x){
            l = m+1;
        }else{
            r = m-1;
        }
    }

    return -1;
}

ll gcd(ll a, ll b){

    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n][n];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    ll x = (a[0][1]*a[0][2])/(a[1][2]);

    ll l = 0, r = 1e9;

    a[0][0] = binarySearch(l,r,x);

    cout<<a[0][0]<<" ";

    for(ll j=1;j<n;j++){
        cout<<a[0][j]/a[0][0]<<" ";
    }

    return 0;
}
