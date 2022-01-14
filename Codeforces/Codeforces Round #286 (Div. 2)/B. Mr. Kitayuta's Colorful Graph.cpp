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
template<class T> void _print(vector<vector<T>> v) { 
	cerr << "\n"; 
	for (auto i : v) { 
		cerr << "[ "; 
		_print(i); 
		cerr << "]\n"; 
	} 
}
template<class T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "\n"; for (auto i : m) { _print(i.first); cerr << " "; _print(i.second); cerr << "\n"; } }


typedef long long ll;

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

void dfs(int s, vector<int> adj[], vector<bool> &visited){

	visited[s] = true;

	for(auto i:adj[s]){
		if(!visited[i]){
			dfs(i,adj,visited);
		}
	}

	return;
}


/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t = 1;

	while(t--){
		
		int n,m;
		cin>>n>>m;

		vector<vector<pair<int,int>>> v(m+1);

		for(int i=0;i<m;i++){
			int a,b,c;
			cin>>a>>b>>c;
			v[c].push_back({a,b});
			v[c].push_back({b,a});
		}

		debug(v);

		int q;
		cin>>q;

		while(q--){

			int x,y;
			cin>>x>>y;

			int ans = 0;

			for(int i=1;i<=m;i++){
				int s = v[i].size();
				if(s){
					vector<int> adj[n+1];
					for(auto p:v[i]){
						adj[p.first].push_back(p.second);
						adj[p.second].push_back(p.first);
					}
					vector<bool> visited(n+1,false);

					dfs(x,adj,visited);

					if(visited[y]){
						ans++;
					}
				}
			}

			cout<<ans<<"\n";
		}

	}

	return 0;
}
