#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<vector<int>> &adj, vector<bool> &visited, vector<int>& distance, vector<int>& parent){
	
	distance[s] = 0;
	visited[s] = true;
	
	queue<int> q;
	q.push(s);
	
	while(!q.empty()){
		
		int curr = q.front();
		q.pop();
		
		for(auto i:adj[curr]){
			if(!visited[i]){
				visited[i] = true;
				parent[i] = curr;
				distance[i] = distance[curr] + 1;
				q.push(i);
			}
		}
	}
	
	return;
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
	
	vector<bool> visited(n+1,false);
	vector<int> distance(n+1,-1), parent(n+1,-1);
	
	bfs(1,adj,visited,distance,parent);
	
	if(distance[n]==-1){
		cout<<"IMPOSSIBLE";
	}else{
		vector<int> ans;
		int i=n;
		while(i!=1){
			ans.push_back(i);
			i = parent[i];
		}
		ans.push_back(1);
		reverse(ans.begin(),ans.end());
		cout<<ans.size()<<endl;
		for(int i:ans){
			cout<<i<<" ";
		}
	}
	
	return 0;
}
