#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
	ll t;
	cin>>t;
	
	while(t--){
		
		ll n,k;
		cin>>n>>k;
		
		vector<ll> v(n);
		map<ll,ll> first, last;
		
		for(ll i=0;i<n;i++){
			cin>>v[i];
			if(first.count(v[i])==0){
				first[v[i]] = i+1;
				last[v[i]] = i+1;
			}else{
				last[v[i]] = i+1;
			}
		}
		
		while(k--){
			
			ll a,b;
			cin>>a>>b;
			
			if(first[b]!=0 && first[a]!=0 && first[a]<last[b]){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}
	}
	
	return 0;
}
