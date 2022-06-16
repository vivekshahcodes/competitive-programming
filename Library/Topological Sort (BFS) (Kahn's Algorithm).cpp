    //We have to check for cycles before using the topological sort algorithm.
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

    //This is the topological sort algorithm.
    void bfs(int n, vector<int> adj[], vector<int>& indegree, vector<int>& ans){
        queue<int> q;
        
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            
            for(auto i:adj[curr]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
    }
