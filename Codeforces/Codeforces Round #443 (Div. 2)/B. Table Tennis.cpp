#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;
    
    cin>>n>>k;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll curr = a[0], c = 0;

    for(ll i=1;i<n;i++){
        if(a[i]>curr){
            curr = a[i];
            c = 1;
        }else{
            c++;
        }

        if(c==k){
            break;
        }
    }

    cout<<curr;

    return 0;
}
