#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(int s, vector<int> adj[], bool visited[]){

    visited[s] = true;

    for(auto i:adj[s]){
        if(!visited[i]){
            dfs(i,adj,visited);
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int prev;
    vector<pair<int,int>> ans;

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,adj,visited);
            if(i!=1){
                ans.push_back({prev,i});
            }
            prev = i;
        }
    }

    cout<<ans.size()<<"\n";
    
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
