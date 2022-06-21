    int findParent(int x, vector<int>& parent){
        if(x==parent[x]){
            return x;
        }
        return parent[x] = findParent(parent[x],parent);
    }
    
    void unionn(int u, int v, vector<int>& parent, vector<int>& rank){
        u = findParent(u,parent);
        v = findParent(v,parent);
        
        if(rank[u]<rank[v]){
            parent[u] = v;
        }else if(rank[v]<rank[u]){
            parent[v] = u;
        }else{
            parent[v] = u;
            rank[u]++;
        }
    }
