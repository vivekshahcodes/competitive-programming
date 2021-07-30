#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(int n, vector<int> adj[], bool visited[]){
    if(visited[n]){
        return;
    }
    visited[n] = true;
    for(auto i:adj[n]){
        if(!visited[i]){
            dfs(i,adj,visited);
        }
    }
}

int main(){

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

    if(m!=n-1){
        cout<<"NO";
    }else{
        int comp = 0;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                comp++;
            }
        }

        if(comp>1){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }


    return 0;
}
