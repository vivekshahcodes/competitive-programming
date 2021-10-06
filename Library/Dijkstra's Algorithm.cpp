void dijkstra(int s, vector<pair<int,int>> adj[], bool visited[], int dist[]){

    priority_queue<pair<int,int>> q;
    dist[s] = 0;
    q.push({0,s});

    while(!q.empty()){
        
        int a = q.top().second;
        q.pop();
        if(visited[a]){
            continue;
        }
        visited[a] = true;

        for(auto i:adj[a]){
            int b = i.first;
            int w = i.second;
            if(dist[a]+w<dist[b]){
                dist[b] = dist[a]+w;
                q.push({-dist[b], b});
            }
        }
    }

}
