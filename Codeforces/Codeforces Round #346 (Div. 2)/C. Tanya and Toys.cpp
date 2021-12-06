#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;

    cin>>n>>k;

    map<ll,ll> m;

    for(ll i=0;i<n;i++){
        ll input;
        cin>>input;
        m[input]++;
    }

    ll total = 0, i=1;
    vector<ll> v;

    while(total+i<=k){
        if(m[i]==0){
            total+=i;
            v.push_back(i);
        }
        i++;
    }

    cout<<v.size()<<endl;

    for(ll i:v){
        cout<<i<<" ";
    }

    return 0;
}
