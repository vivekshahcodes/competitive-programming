#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    ll ans = 0, mul = n;

    while(n<k){
        n*=mul;
        ans++;
    }

    if(n==k){
        cout<<"YES"<<endl<<ans;
    }else{
        cout<<"NO";
    }

    return 0;
}
