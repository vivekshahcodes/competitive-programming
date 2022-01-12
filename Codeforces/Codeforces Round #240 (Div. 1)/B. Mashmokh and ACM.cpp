#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr<< "\n";
#else
#define debug(x)
#endif

template<class T> void _print(T a) { cerr << a; }
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template<class T> void _print(vector<vector<T>> v) { cerr << "\n"; for (auto i : v) { cerr << "[ "; for (T j : i) { cerr << j << " "; } cerr << "]\n"; } }
template<class T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "\n"; for (auto i : m) { _print(i.first); cerr << " "; _print(i.second); cerr << "\n"; } }

typedef long long ll;

/********************************************************************************************************************************************************/
//Functions

vector<ll> factors[2001];

void findFactors(){
	for(ll x=1;x<=2000;x++){
		for(ll i=1;i*i<=x;i++){
			if(x%i==0){
				factors[x].push_back(i);
				if(x/i!=i){
					factors[x].push_back(x/i);
				}
			}
		}
	}
}

/********************************************************************************************************************************************************/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t = 1;
	ll m = 1e9+7;

	findFactors();

	while(t--){
		
		ll n,k;
		cin>>n>>k;

		vector<vector<ll>> dp(n+1, vector<ll> (k+1,0));

		for(int i=1;i<=n;i++){
			dp[i][1] = 1;
		}

		for(int i=1;i<=n;i++){
			for(int j=2;j<=k;j++){
				for(auto x:factors[i]){
					dp[i][j] = (dp[i][j] + dp[x][j-1])%m;
				}
			}
		}

		debug(dp);

		ll ans = 0;

		for(int i=1;i<=n;i++){
			ans  = (ans + dp[i][k])%m;
		}

		cout<<ans;

	}

	return 0;
}
