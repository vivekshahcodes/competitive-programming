#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++){

        int a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool flag = true;
    int ans = 0;

    while(flag){

        flag = false;

        vector<pair<int,int>> v;

        for(int i=1;i<=n;i++){
            if(adj[i].size()==1){
                flag = true;
                int x = adj[i][0];
                adj[i].clear();
                int c;
                for(c=0;c<adj[x].size();c++){
                    if(adj[x][c]==i){
                        break;
                    }
                }
                v.push_back({x,c});
            }
        }

        sort(v.rbegin(),v.rend());

        for(auto i:v){
            if(adj[i.first].size()==0){
                continue;
            }
            adj[i.first].erase(adj[i.first].begin()+i.second);
        }

        if(!flag){
            break;
        }

        ans++;
    }

    cout<<ans;

    return 0;
}
