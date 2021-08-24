#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(int s, vector<int> adj[], bool visited[]){
    if(visited[s]){
        return;
    }
    visited[s] = true;
    for(auto i:adj[s]){
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
    memset(visited,false,n+1);

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool isTree = true;

    if(n-1!=m){
        isTree = false;
    }else{
        dfs(1,adj,visited);
        for(int i=2;i<=n;i++){
            if(!visited[i]){
                isTree = false;
                break;
            }
        }
    }

    if(isTree){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}
