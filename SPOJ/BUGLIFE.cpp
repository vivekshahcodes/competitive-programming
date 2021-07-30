#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool dfs(int n, vector<int> adj[], bool visited[], bool col[], bool curr){
    visited[n] = true;
    col[n] = curr;
    for(auto i:adj[n]){
        if(!visited[i]){
            if(!dfs(i,adj,visited,col,!curr))
                return false;
        }else{
            if(col[i]==col[n])
                return false;
        }
    }

    return true;
}

int main(){

  int t, it=1;

  cin>>t;

  while(t--){

    int n,m;

    cin>>n>>m;

    vector<int> adj[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
    bool col[n+1];
    bool curr = true;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout<<"Scenario #"<<it<<":"<<endl;

    bool ans = true;

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            if(!dfs(i,adj,visited,col,curr)){
                ans = false;
                break;
            }
        }
    }

    if(ans){
        cout<<"No suspicious bugs found!"<<endl;
    }else{
        cout<<"Suspicious bugs found!"<<endl;
    }

    it++;

  }

  return 0;

}
