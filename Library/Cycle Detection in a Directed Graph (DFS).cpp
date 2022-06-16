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
