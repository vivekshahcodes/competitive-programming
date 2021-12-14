#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(ll s, vector<ll> adj[], bool visited[], bool color[], bool c){

    if(visited[s]){
        return;
    }

    visited[s] = true;
    color[s] = c;

    for(auto i:adj[s]){
        dfs(i,adj,visited,color,!color[s]);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    vector<ll> adj[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
    bool color[n+1];

    for(ll i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1,adj,visited,color,true);

    ll a = 0, b = 0;

    for(ll i=1;i<=n;i++){
        if(color[i]){
            a++;
        }else{
            b++;
        }
    }

    cout<<(a*b)-(n-1);

    return 0;
}
