#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){

    if(n<=1) return false;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll curr=1;

    ll a[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));

    for(ll i=2;i<=n;i++){
        if(visited[i]) continue;
        for(ll x=i;x<=n;x+=i){
            if(visited[x]) continue;
            visited[x] = true;
            a[x] = curr;
        }
        curr++;
    }

    for(ll i=2;i<=n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
