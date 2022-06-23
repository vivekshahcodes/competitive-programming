#include<bits/stdc++.h>
using namespace std;

void permutations(int i, int n, string& s, set<string>& p){
	
	if(i==n){
		p.insert(s);
	}
	
	for(int j=i;j<n;j++){
		swap(s[i],s[j]);
		permutations(i+1,n,s,p);
		swap(s[i],s[j]);
	}
}

int main(){
	
	string s;
	cin>>s;
	
	int n = s.length();
	
	set<string> p;
	permutations(0,n,s,p);
	
	cout<<p.size()<<endl;
	for(auto i:p){
		cout<<i<<endl;
	}
	
	return 0;
}
