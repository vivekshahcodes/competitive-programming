void bfs(int s){

    visited[s] = true;
    distance[s] = 0;
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
            distance[i] = distance[x] + 1;
            q.push(i);

        }
    }
}
