#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		string s;
		cin>>s;
		
		int carry = 0;
		string ans;
		
		if(s[0]!='9'){
			for(int i=0;i<n;i++){
				s[i] = (9-(s[i]-'0'))+'0';
			}
			cout<<s<<'\n';
			continue;
		}
		
		for(int i=n-1;i>=0;i--){
			int curr = s[i]-'0';
			curr += carry;
			carry = curr/10;
			curr = curr%10;
			if(curr<=1){
				ans.push_back((1-curr)+'0');
			}else{
				ans.push_back((11-curr)+'0');
				carry = 1;
			}
		}
		
		reverse(ans.begin(),ans.end());
		
		string finalAns;
		int i = 0;
		while(i<n && ans[i]=='0') i++;
		
		while(i<n) finalAns.push_back(ans[i++]);
		
		cout<<finalAns<<"\n";
	}
	
	return 0;
}
