//Cyclic graphs do not have a topological ordering, so cycle detection is mandatory, unless specified.
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

//The ans vector contains the topological sorting in reverse order.
void dfs(int s, vector<int> adj[], vector<bool>& visited, vector<int>& ans){
	
	visited[s] = true;
	
	for(auto i:adj[s]){
		if(!visited[i]){
			dfs(i,adj,visited,ans);
		}
	}
	
	ans.push_back(s);
}
