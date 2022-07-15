#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
	ll t;
	cin>>t;
	
	while(t--){
		
		ll n;
		cin>>n;
		
		ll curr = 1;
		
		while(curr*10<=n){
			curr *= 10;
		}
		
		cout<<n-curr<<"\n";
		
	}
	
	return 0;
}
