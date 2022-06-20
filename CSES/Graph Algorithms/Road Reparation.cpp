#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	
	ll n,m;
	cin>>n>>m;
	
	vector<vector<pair<ll,ll>>> adj(n+1);
	
	for(ll i=0;i<m;i++){
		ll a,b,w;
		cin>>a>>b>>w;
		
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}
	
	vector<ll> key(n+1,1e18), parent(n+1,-1);
	vector<bool> mst(n+1,false);
	
	key[0] = 0;
	
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
	
	q.push({0,1});
	
	ll ans = 0, edges = 0;
	
	while(!q.empty()){
		
		ll x = q.top().second;
		if(!mst[x] && edges<n){
			edges++;
			ans += q.top().first;
		}
		q.pop();
		
		mst[x] = true;
		
		for(auto i:adj[x]){
			ll y = i.first;
			ll w = i.second;
			
			if(!mst[y] && w<key[y]){
				parent[y] = x;
				key[y] = w;
				q.push({key[y],y});
			}
		}
		
	}
	
	if(edges<n){
		cout<<"IMPOSSIBLE";
	}else{
		cout<<ans;
	}
	
	return 0;
}
