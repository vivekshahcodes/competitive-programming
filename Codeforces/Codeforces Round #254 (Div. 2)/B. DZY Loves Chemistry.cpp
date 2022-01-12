#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr<< "\n";
#else
#define debug(x)
#endif

template<class T> void _print(T a) { cerr << a; }
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template<class T> void _print(vector<vector<T>> v) { cerr << "\n"; for (auto i : v) { cerr << "[ "; for (T j : i) { cerr << j << " "; } cerr << "]\n"; } }
template<class T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "\n"; for (auto i : m) { _print(i.first); cerr << " "; _print(i.second); cerr << "\n"; } }

typedef long long ll;

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/
int c = 0;

void dfs(ll s, vector<vector<ll>> adj, vector<bool> &visited){

	visited[s] = true;
	c++;

	for(auto i:adj[s]){
		if(!visited[i]){
			dfs(i,adj,visited);
		}
	}
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	ll t = 1;

	while(t--){
		
		ll n,m;
		cin>>n>>m;

		vector<vector<ll>> adj(n+1);
		vector<bool> visited(n+1,false);

		for(ll i=0;i<m;i++){
			ll x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}

		vector<ll> v;

		for(ll i=1;i<=n;i++){
			if(!visited[i]){
				dfs(i,adj,visited);
				v.push_back(c);
				c = 0;
			}
		}

		ll finalAns = 1;

		for(auto i:v){
			ll x = i;
			ll curr = 1;
			for(ll j=1;j<x;j++){
				curr*=2;
			}
			finalAns *= curr;
		}

		cout<<finalAns;
	}

	return 0;
}
