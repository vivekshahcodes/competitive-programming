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

/*---------------------------------------------------------------------------------------------------------------------------*/

vector<int> dp(1000005,0);
ll m = 1e9+7;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	ll t = 1;

	while(t--){

		ll n;
		cin>>n;

		ll k;
		cin>>k;

		vector<ll> c(n);
		for(ll i=0;i<n;i++){
			cin>>c[i];
		}

		debug(c);

		dp[0] = 1;

		for(auto coin:c){
			for(ll i=1;i<=k;i++){
				if(i-coin>=0){
					ll x = dp[i]+dp[i-coin];
					if(x>m){
						dp[i] = x-m;
					}else{
						dp[i] = x;
					}
				}
			}
			debug(dp);
		}

		cout<<dp[k];

	}

	return 0;
}
