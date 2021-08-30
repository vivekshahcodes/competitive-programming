void bellmanFord(int s, int n, vector<tuple<int,int,int>> edges, int dist[]){

    for(int i=1;i<=n-1;i++){

        bool flag = false;

        for(auto e:edges){
            int a,b,w;
            tie(a,b,w) = e;
            dist[b] = min(dist[b],dist[a]+w);
            if(dist[a]+w<dist[b]){
                dist[b] = dist[a]+w;
                flag = true;
            }
        }
        
        if(!flag){
            break;
        }
    }

}
