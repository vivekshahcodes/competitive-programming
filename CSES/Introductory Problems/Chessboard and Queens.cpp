#include<bits/stdc++.h>
using namespace std;

int ans;
unordered_set<int> column, diagonal1, diagonal2;

bool isValid(int i, int j, int n, vector<vector<char>>& v){
	if(column.count(j) || diagonal1.count(j-i)|| diagonal2.count(j+i)){
		return false;
	}
	return true;
}

void nQueens(int i, int n, vector<vector<char>>& v){
	
	if(i==n){
		ans++;
		return;
	}
	
	for(int j=0;j<n;j++){
		
		if(v[i][j]=='.' && isValid(i,j,n,v)){
			
			column.insert(j);
			diagonal1.insert(j-i);
			diagonal2.insert(j+i);
			
			nQueens(i+1,n,v);
			
			column.erase(j);
			diagonal1.erase(j-i);
			diagonal2.erase(j+i);
		}
	}
}

int main(){
	
	vector<vector<char>> v(8, vector<char> (8));
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>v[i][j];
		}
	}
	
	nQueens(0,8,v);
	
	cout<<ans;
}
