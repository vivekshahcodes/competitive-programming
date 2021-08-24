#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll c = 0;

void dfs(ll s, vector<ll> adj[], bool visited[]){
    if(visited[s]){
        return;
    }
    visited[s] = true;
    c++;
    for(auto i:adj[s]){
        dfs(i,adj,visited);
    }
}

int main(){

    ll n,m;

    cin>>n>>m;

    vector<ll> adj[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));

    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    ll ans = 0;

    for(ll i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,adj,visited);
            ans += ll(c*(c-1))/2;
            c = 0;
        }
    }

    ll total = ll((n*(n-1))/2);

    cout<<total-ans;


    return 0;
}
