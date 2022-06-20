#include<bits/stdc++.h>
using namespace std;

int findParent(int x, vector<int>& parent){
	if(x==parent[x]){
		return x;
	}
	return parent[x] = findParent(parent[x],parent);
}

void unionn(int u, int v, vector<int>& parent, vector<int>& rank, int &maxComponent){
	u = findParent(u,parent);
	v = findParent(v,parent);
	
	if(rank[u]<rank[v]){
		parent[u] = v;
		rank[v] += rank[u];
		maxComponent = max(rank[v],maxComponent);
	}else{
		parent[v] = u;
		rank[u] += rank[v];
		maxComponent = max(rank[u],maxComponent);
	}
}

int main(){
	
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int>> edges;
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		edges.push_back({a,b});
	}
	
	vector<int> parent(n+1);
	for(int i=1;i<=n;i++){
		parent[i] = i;
	}
	vector<int> rank(n+1,1);
	
	int components = n, maxComponent = 1;
	
	for(auto i:edges){
		if(findParent(i.first,parent)!=findParent(i.second,parent)){
			unionn(i.first,i.second,parent,rank,maxComponent);
			components--;
		}
		cout<<components<<" "<<maxComponent<<endl;
	}
	
	return 0;
}
