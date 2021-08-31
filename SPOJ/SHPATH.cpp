#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int dijkstra(int s,int d, vector<pair<int,int>> adj[], bool visited[], int cost[]){

    priority_queue<pair<int,int>> q;
    cost[s] = 0;
    q.push({0,s});

    while(!q.empty()){

        int a = q.top().second;
        q.pop();
        if(visited[a]){
            continue;
        }
        visited[a] = true;
        
        for(auto i:adj[a]){
            int b = i.first;
            int w = i.second;
            if(cost[a]+w<cost[b]){
                cost[b] = cost[a]+w;
                q.push({-cost[b],b});
            }
        }
    } 

    return cost[d];
}

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    vector<pair<int,int>> adj[n+1];
    bool visited[n+1];
    int cost[n+1];

    map<string,int> ma;

    for(int i=1;i<=n;i++){

        string s;
        cin>>s;

        ma[s]=i;
        
        int m;
        cin>>m;

        for(int i=0;i<m;i++){
            int b,w;
            cin>>b>>w;
            adj[ma[s]].push_back({b,w});
        }
    }

    int x;

    cin>>x;

    while(x--){

        memset(visited,false,sizeof(visited));

        for(int i=1;i<=n;i++){
            cost[i] = INT_MAX;

        }

        string a,b;

        cin>>a>>b;

        cout<<dijkstra(ma[a],ma[b],adj,visited,cost)<<endl;

    }


  }

  return 0;

}
