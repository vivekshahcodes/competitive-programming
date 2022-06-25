//Recursion
//TC - O(2^nm)
//SC - O(n*m) for the stack space

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9+7;

ll countWays(ll i, ll j, ll n, ll m, vector<vector<char>>& v){
	
	if(i>=n || j>=m || v[i][j]=='#'){
		return 0;
	}
	
	if(i==n-1 && j==m-1){
		return 1;
	}
	
	return (countWays(i+1,j,n,m,v) + countWays(i,j+1,n,m,v))%mod;
}

int main(){
	
	ll n,m;
	cin>>n>>m;
	
	vector<vector<char>> v(n, vector<char> (m));
	
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	
	cout<<countWays(0,0,n,m,v);
	
	return 0;
}


//Memoization
//TC - O(n*m)
//SC - O(n*m) for the stack space + O(n*m) for the dp array

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9+7;

ll countWays(ll i, ll j, ll n, ll m, vector<vector<char>>& v, vector<vector<ll>>& dp){
	
	if(i>=n || j>=m || v[i][j]=='#'){
		return 0;
	}
	
	if(i==n-1 && j==m-1){
		return 1;
	}
	
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	
	return dp[i][j] = (countWays(i+1,j,n,m,v,dp) + countWays(i,j+1,n,m,v,dp))%mod;
}

int main(){
	
	ll n,m;
	cin>>n>>m;
	
	vector<vector<char>> v(n, vector<char> (m));
	vector<vector<ll>> dp(n, vector<ll> (m,-1));
	
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	
	cout<<countWays(0,0,n,m,v,dp);
	
	return 0;
}

//Tabulation
//TC - O(n*m)
//SC - O(n*m) for the dp array

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9+7;

int main(){
	
	ll n,m;
	cin>>n>>m;
	
	vector<vector<char>> v(n, vector<char> (m));
	
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	
	vector<vector<ll>> dp(n, vector<ll> (m,0));
	
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(v[i][j]=='#'){
				dp[i][j] = 0;
			}else if(i==0 && j==0){
				dp[i][j] = 1;
			}else{
				if(i>0){
					dp[i][j] = (dp[i][j] + dp[i-1][j])%mod;
				}
				if(j>0){
					dp[i][j] = (dp[i][j] + dp[i][j-1])%mod;
				}
			}
		}
	}
	
	cout<<dp[n-1][m-1];
	
	return 0;
}


//Space Optimization
//TC - O(n*m)
//TC - O(m) for the temp and prev arrays

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9+7;

int main(){
	
	ll n,m;
	cin>>n>>m;
	
	vector<vector<char>> v(n, vector<char> (m));
	
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	
	vector<ll> prev(m,0);
	
	for(ll i=0;i<n;i++){
		vector<ll> temp(m,0);
		for(ll j=0;j<m;j++){
			if(v[i][j]=='#'){
				temp[j] = 0;
			}else if(i==0 && j==0){
				temp[j] = 1;
			}else{
				if(i>0){
					temp[j] = (temp[j] + prev[j])%mod;
				}
				if(j>0){
					temp[j] = (temp[j] + temp[j-1])%mod;
				}
			}
		}
		prev = temp;
	}
	
	cout<<prev[m-1];
	
	return 0;
}
