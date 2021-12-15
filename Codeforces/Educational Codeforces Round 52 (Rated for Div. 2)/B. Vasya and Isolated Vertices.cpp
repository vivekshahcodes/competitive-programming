#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(ll mid, ll m){

    if((mid*(mid-1))/2 >= m){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m;

    cin>>n>>m;

    cout<<max(0ll,n-(2*m))<<" ";

    // For n nodes, we need n(n-1)/2 edges to connect all nodes with each other

    ll l = -1ll, r = n;

    while(l+1<r){
        
        ll mid = l + (r-l)/2;

        if(isGood(mid,m)){
            r = mid;
        }else{
            l = mid;
        }
    }

    cout<<n-r;

    return 0;
}
