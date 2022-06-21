//All bridges are stored in the bridges vector of vector.
void dfs(int s, int p, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &tin, vector<int> &low, int &timer, vector<vector<int>>& bridges){

    visited[s] = true;
    tin[s] = low[s] = timer++;

    for(int i:adj[s]){
        if(i==p){
            continue;
        }else if(visited[i]){
            low[s] = min(low[s],tin[i]);
        }else{
            dfs(i,s,adj,visited,tin,low,timer,bridges);
            low[s] = min(low[s],low[i]);

            if(low[i]>tin[s]){
                bridges.push_back({s,i});
            }
        }
    }
}
