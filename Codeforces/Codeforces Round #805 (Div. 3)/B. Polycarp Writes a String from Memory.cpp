#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	
		string str;
		cin>>str;
		
		int n = str.length(), ans = 0;
		set<char> s;
		
		for(int i=0;i<n;i++){
			s.insert(str[i]);
			if(s.size()==4){
				s.clear();
				ans++;
			}
			s.insert(str[i]);
		}
		
		if(s.size()>=1) ans++;
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
