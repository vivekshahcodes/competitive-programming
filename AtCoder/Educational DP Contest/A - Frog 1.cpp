//Recursion
//TC - O(2^n), more precisely, O(1.618^n)
//SC - O(n) for the stack space

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minCost(ll n, vector<ll>& v){
	
	if(n==0){
		return 0;
	}
	
	ll a = minCost(n-1,v) + abs(v[n]-v[n-1]);
	ll b = 1e18;
	if(n-2>=0){
		b = minCost(n-2,v) + abs(v[n]-v[n-2]);
	}
	
	return min(a,b);
}

int main(){
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	
	cout<<minCost(n-1,v);
	
	return 0;
}


//Memoization
//TC - O(n)
//SC - O(n) for the stack space + O(n) for the dp array

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minCost(ll n, vector<ll>& v, vector<ll>& dp){
	
	if(n==0){
		return 0;
	}
	
	if(dp[n]!=-1){
		return dp[n];
	}
	
	ll a = minCost(n-1,v,dp) + abs(v[n]-v[n-1]);
	ll b = 1e18;
	if(n-2>=0){
		b = minCost(n-2,v,dp) + abs(v[n]-v[n-2]);
	}
	
	return dp[n] = min(a,b);
}

int main(){
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	
	vector<ll> dp(n,-1);
	
	cout<<minCost(n-1,v,dp);
	
	return 0;
}


//Tabulation
//TC - O(n)
//SC - O(n) for the dp array

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	
	vector<ll> dp(n);
	dp[0] = 0;
	
	for(ll i=1;i<n;i++){
		ll a = dp[i-1] + abs(v[i]-v[i-1]);
		ll b = 1e18;
		if(i>1){
			b = dp[i-2] + abs(v[i]-v[i-2]);
		}
		dp[i] = min(a,b);
	}
	
	cout<<dp[n-1];
	
	return 0;
}


//Space Optimization
//TC - O(n)
//SC - O(1)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	
	ll a = 0, b = 0, c = 0;
	
	for(ll i=1;i<n;i++){
		ll first = b + abs(v[i]-v[i-1]);
		ll second = 1e18;
		if(i>1){
			second= a + abs(v[i]-v[i-2]);
		}
		c = min(first,second);
		a = b;
		b = c;
	}
	
	cout<<c;
	
	return 0;
}
