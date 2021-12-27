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

    vector<int> adj[n+m+1];
    bool visited[n+m+1];
    memset(visited,false,sizeof(visited));

    bool flag = false;

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x!=0) flag = true;
        for(int j=0;j<x;j++){
            int input;
            cin>>input;
            input+=n;
            adj[i].push_back(input);
            adj[input].push_back(i);
        }
    }

    int ans = 0;

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans++;
            dfs(i,adj,visited);
        }
    }

    if(flag){
        cout<<ans-1;
    }else{
        cout<<n;
    }

    return 0;
}
