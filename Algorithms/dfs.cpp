void dfs(int s){

    if(visited[s]){
        return;
    }

    visited[s] = true;

    //Process the node

    for(auto i:adj[s]){
        dfs(i);
    }
}
