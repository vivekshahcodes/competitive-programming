#include<bits/stdc++.h>
using namespace std;

void toh(int n, int a, int b, int c, vector<pair<int,int>>& ans){
	
	if(n==1){
		ans.push_back({a,c});
		return;
	}
	
	toh(n-1,a,c,b,ans);
	toh(1,a,b,c,ans);
	toh(n-1,b,a,c,ans);
}

int main(){
	
	int n;
	cin>>n;
	
	vector<pair<int,int>> ans;
	
	toh(n,1,2,3,ans);
	
	cout<<ans.size()<<endl;
	for(auto i:ans){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	return 0;
}
