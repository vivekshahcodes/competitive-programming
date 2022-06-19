#include<bits/stdc++.h>
using namespace std;

bool dfs(int s, vector<vector<int>> &adj, vector<int>& color, int currentColor){
	
	color[s] = currentColor;
	
	for(auto i:adj[s]){
		if(color[i]==0){
			if(!dfs(i,adj,color,3-currentColor)){
				return false;
			}
		}else if(color[i]==currentColor){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>> adj(n+1);
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	vector<int> color(n+1,0);
	
	bool isPossible = true;
	
	for(int i=1;i<=n;i++){
		if(color[i]==0){
			if(!dfs(i,adj,color,1)){
				isPossible = false;
				break;
			}
		}
	}
	
	if(isPossible){
		for(int i=1;i<=n;i++){
			cout<<color[i]<<" ";
		}
	}else{
		cout<<"IMPOSSIBLE";
	}
	
	return 0;
}
