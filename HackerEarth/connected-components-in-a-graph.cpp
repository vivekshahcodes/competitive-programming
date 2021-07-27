#include<bits/stdc++.h>
using namespace std;

void dfs(int s,vector<int> adj[],bool visited[]){
	if(visited[s]){
		return;
	}
	visited[s] = true;
	for(auto i:adj[s]){
		dfs(i,adj,visited);
	}
}

int main(){

	int n,e;

	cin>>n>>e;

	vector<int> adj[n+1];
	bool visited[n+1] = {false};

	for(int i=0;i<e;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int ans = 0;

	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			dfs(i,adj,visited);
			ans++;
		}
	}

	cout<<ans;

	return 0;
}
