#include<bits/stdc++.h>
using namespace std;

bool isCyclic(int s, vector<int>adj[], vector<bool>& visited, vector<bool>& inDfs){
	
	visited[s] = true;
	inDfs[s] = true;
	
	for(auto i:adj[s]){
		if(!visited[i]){
			if(isCyclic(i,adj,visited,inDfs)){
				return true;
			}
		}else if(inDfs[i]){
			return true;
		}
	}
	
	inDfs[s] = false;
	return false;
}

void dfs(int s, vector<int> adj[], vector<bool>& visited, vector<int>& ans){
	
	visited[s] = true;
	
	for(auto i:adj[s]){
		if(!visited[i]){
			dfs(i,adj,visited,ans);
		}
	}
	
	ans.push_back(s);
}

int main(){
	
	int n,m;
	cin>>n>>m;
	
	vector<int> adj[n+1];
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
	}
	
	vector<bool> visited(n+1), inDfs(n+1,false);
	vector<int> ans;
	
	bool cyclePresent = false;
	
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cyclePresent |= isCyclic(i,adj,visited,inDfs);
		}
	}
	
	if(cyclePresent){
		cout<<"IMPOSSIBLE";
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		visited[i] = false;
	}
	
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i,adj,visited,ans);
		}
	}
	
	for(int i=n-1;i>=0;i--){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
