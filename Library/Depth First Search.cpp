void dfs(int s, vector<int> adj[], bool visited[]){

    if(visited[s]){
        return;
    }

    visited[s] = true;

    //Process the node

    for(auto i:adj[s]){
        dfs(i);
    }
}
