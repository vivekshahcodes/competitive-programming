#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int bfs(int s, vector<int> adj[], bool visited[], int dist[]){

    int ans = 0;

    visited[s] = true;
    dist[s] = 0;

    queue<int> q;
    q.push(s);

    while(!q.empty()){
        
        int x = q.front();
        q.pop();

        for(auto i:adj[x]){
            if(!visited[i]){
                visited[i] = true;
                dist[i] = dist[x] + 1;
                ans = max(ans,dist[i]);
                q.push(i);
            }
        }
    }

    return ans;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<int> adj[n+1];
    bool visited[n+1];
    int dist[n+1];

    int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==-1){
            continue;
        }
        adj[i].push_back(a[i]);
        adj[a[i]].push_back(i);
    }

    int ans = 0;

    for(int i=1;i<=n;i++){
        if(a[i]==-1){
            memset(visited,false,sizeof(visited));
            memset(dist,0,sizeof(dist));
            int curr = bfs(i,adj,visited,dist);
            ans = max(ans,curr);  
        }      
    }

    cout<<ans+1;

    return 0;
}
