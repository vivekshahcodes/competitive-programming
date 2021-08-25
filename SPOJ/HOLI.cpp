#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ans = 0;

ll dfs(ll s, vector<pair<ll,ll>> adj[], bool visited[], ll n, ll count[]){
    visited[s] = true;
    count[s] = 1;
    for(auto i:adj[s]){
        if(!visited[i.first]){
            count[s] += dfs(i.first,adj,visited,n,count);
            ans += 2*min(count[i.first],n-count[i.first])*i.second;
        }
    }

    return count[s];
}

int main(){

  ll t,tc=0;

  cin>>t;

  while(t--){

    tc++;

    ll n;

    cin>>n;

    vector<pair<ll,ll>> adj[n+1];
    bool visited[n+1];
    ll count[n+1];
    memset(visited,false,sizeof(visited));
    memset(count,0,sizeof(count));

    for(ll i=0;i<n-1;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    dfs(1,adj,visited,n,count);

    cout<<"Case #"<<tc<<": "<<ans<<endl;

    ans = 0;

  }

  return 0;

}
