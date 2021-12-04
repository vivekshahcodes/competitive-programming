#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    ll l = 1, r = (1ll<<n)-1;
    ll curr = n;

    while(l<=r){

        ll m = l + (r-l)/2;

        if(m==k){
            cout<<curr;
            break;
        }

        if(m<k){
            l = m+1;
            curr--;
        }else{
            r = m-1;
            curr--;
        }
    }

    return 0;
}
