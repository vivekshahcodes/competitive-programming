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
template<class T, class V> void _print(pair<T,V> p){ _print('{'); _print(p.first); _print(','); _print(p.second); _print('}'); }
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template<class T> void _print(vector<vector<T>> v) { cerr << "\n"; for (auto i : v) { cerr << "[ "; _print(i); cerr << "]\n"; } }
template<class T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "\n"; for (auto i : m) { _print(i.first); cerr << " "; _print(i.second); cerr << "\n"; } }


typedef long long ll;

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

void dfs(int s, vector<vector<int>>& adj, vector<bool> &visited, vector<int>& component){

	visited[s] = true;
	component.push_back(s);

	for(auto i:adj[s]){
		if(!visited[i]){
			dfs(i,adj,visited,component);
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

	int t=1;

	while(t--){

		int n,m;
		cin>>n>>m;

		vector<vector<int>> adj(n+1);
		vector<bool> visited(n+1,false);

		while(m--){

			int x;
			cin>>x;

			int prev;

			for(int i=0;i<x;i++){
				int input;
				cin>>input;
				if(i!=0){
					adj[prev].push_back(input);
					adj[input].push_back(prev);
				}else{
					prev = input;
				}
			}
		}
		vector<int> ans(n+1,0);

		debug(adj);

		for(int i=1;i<=n;i++){
			if(!visited[i]){
				vector<int> component;
				dfs(i,adj,visited,component);
				for(int x:component){
					ans[x] = component.size();
				}
			}
		}

		for(int i=1;i<=n;i++){
			cout<<ans[i]<<" ";
		}


	}

	return 0;
}
