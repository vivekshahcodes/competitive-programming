void bfs(int s){

    visited[s] = true;
    q.push(s);

    while(!q.empty()){

        int x = q.front();
        q.pop();

        //Process the node

        for(auto i:adj[x]){
            
            if(visited[i]){
                continue;
            }

            visited[i] = true;
            q.push(i);

        }
    }
}
