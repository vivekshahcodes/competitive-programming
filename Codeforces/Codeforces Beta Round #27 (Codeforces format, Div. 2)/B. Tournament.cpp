#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ans = false;

void dfs(vector<int> adj[], bool visited[], int x, int y){

    visited[x] = true;

    if(x==y){
        ans = true;
        return;
    }

    for(auto i:adj[x]){
        if(!visited[i]){
            dfs(adj,visited,i,y);
        }
    }

    return;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<int> adj[n+1];
    bool visited[n+1];
    memset(visited,false,sizeof(visited));

    map<int,int> m;

    for(int i=0;i<((n*(n-1))/2)-1;i++){
        int a,b;
        cin>>a>>b;
        m[a]++;
        m[b]++;
        adj[a].push_back(b);
    }

    int x = -1, y = -1;

    for(auto i:m){
        if(i.second==n-2 && x==-1){
            x = i.first;
        }else if(i.second==n-2){
            y = i.first;
        }
    }

    dfs(adj,visited,x,y);

    if(ans){
        cout<<x<<" "<<y;
    }else{
        cout<<y<<" "<<x;
    }

    return 0;
}
