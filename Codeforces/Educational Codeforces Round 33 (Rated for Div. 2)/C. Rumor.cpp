#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dfs(ll s, vector<ll> adj[], bool visited[], ll a[]){

    visited[s] = true;
    ll ans = a[s];

    for(auto i:adj[s]){
        if(!visited[i]){
            ans = min(ans,dfs(i,adj,visited,a));
        }
    }

    return ans;    
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;
    cin>>n>>k;

    ll a[n+1];

    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }

    vector<ll> adj[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));

    for(ll i=0;i<k;i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll ans = 0;

    for(ll i=1;i<=n;i++){
        if(!visited[i]){
            ans += dfs(i,adj,visited,a);
        }
    }

    cout<<ans;

    return 0;
}
