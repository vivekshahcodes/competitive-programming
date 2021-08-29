#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int coord(int x, int y){
    return (x*10)+y;
}

int bfs(int s, int d, vector<int> adj[], bool visited[], int dist[]){
    
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto i:adj[x]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
                dist[i] = dist[x] + 1;
            }
        }
    }

    return dist[d];
}

int main(){

  int t;

  cin>>t;

  vector<int> adj[100];

  for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
          if(i+1<=8){
              if(j+2<=8){
                  adj[coord(i,j)].push_back(coord(i+1,j+2));
                  adj[coord(i+1,j+2)].push_back(coord(i,j));
              }

              if(j-2>=1){
                  adj[coord(i,j)].push_back(coord(i+1,j-2));
                  adj[coord(i+1,j-2)].push_back(coord(i,j));
              }
          }

          if(i-1>=1){
              if(j+2<=8){
                  adj[coord(i,j)].push_back(coord(i-1,j+2));
                  adj[coord(i-1,j+2)].push_back(coord(i,j));
              }

              if(j-2>=1){
                  adj[coord(i,j)].push_back(coord(i-1,j-2));
                  adj[coord(i-1,j-2)].push_back(coord(i,j));
              }
          }

          if(i+2<=8){
              if(j+1<=8){
                  adj[coord(i,j)].push_back(coord(i+2,j+1));
                  adj[coord(i+2,j+1)].push_back(coord(i,j));
              }

              if(j-1>=1){
                  adj[coord(i,j)].push_back(coord(i+2,j-1));
                  adj[coord(i+2,j-1)].push_back(coord(i,j));
              }
          }

          if(i-2>=1){
              if(j+1<=8){
                  adj[coord(i,j)].push_back(coord(i-2,j+1));
                  adj[coord(i-2,j+1)].push_back(coord(i,j));
              }

              if(j-1>=1){
                  adj[coord(i,j)].push_back(coord(i-2,j-1));
                  adj[coord(i-2,j-1)].push_back(coord(i,j));
              }
          }

      }
  }

  while(t--){

    bool visited[100];
    int dist[100];

    memset(visited,false,sizeof(visited));
    memset(dist,0,sizeof(dist));

    string a,b;

    cin>>a>>b;

    int x = (((a[0]-'a')+1)*10) + (a[1]-'0');
    int y = (((b[0]-'a')+1)*10) + (b[1]-'0');

    cout<<bfs(x,y,adj,visited,dist)<<endl;

  }

  return 0;

}
