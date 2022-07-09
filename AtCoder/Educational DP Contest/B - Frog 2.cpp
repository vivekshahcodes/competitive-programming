//Recursion
//TC - O(k^n)
//SC - O(n)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minCost(ll n, vector<ll>& v, int k){
	
	if(n==0) return 0;
	
	ll ans = 1e18;
	
	for(ll i=1;i<=k;i++){
		if(n-i>=0) ans = min(ans, minCost(n-i,v,k) + abs(v[n] - v[n-i]));
	}
	
	return ans;
}

int main(){
	
	ll n,k;
	cin>>n>>k;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin>>v[i];
	
	cout<<minCost(n-1,v,k);
	
	return 0;
}


//Memoization
//TC - O(n*k)
//SC - O(n) for the stack space + O(n) for the dp array

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minCost(ll n, vector<ll>& v, int k, vector<ll>& dp){
	
	if(n==0) return 0;
	if(dp[n]!=-1) return dp[n];
	
	ll ans = 1e18;
	
	for(ll i=1;i<=k;i++){
		if(n-i>=0) ans = min(ans, minCost(n-i,v,k,dp) + abs(v[n] - v[n-i]));
	}
	
	return dp[n] = ans;
}

int main(){
	
	ll n,k;
	cin>>n>>k;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin>>v[i];
	
	vector<ll> dp(n,-1);
	
	cout<<minCost(n-1,v,k,dp);
	
	return 0;
}


//Tabulation
//TC - O(n*k)
//SC - O(n) for the dp array

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	
	ll n,k;
	cin>>n>>k;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin>>v[i];
	
	vector<ll> dp(n);
	dp[0] = 0;
	
	for(ll i=1;i<n;i++){
		dp[i] = 1e18;
		for(ll j=1;j<=k;j++){
			if(i-j>=0) dp[i] = min(dp[i], dp[i-j] + abs(v[i]-v[i-j]));
		}
	}
	
	cout<<dp[n-1];
	
	return 0;
}


//Space Optimization
//TC - O(n*k)
//SC - O(k) for the dp array
//Note: This optimization is not worth it, if k tends to n.
