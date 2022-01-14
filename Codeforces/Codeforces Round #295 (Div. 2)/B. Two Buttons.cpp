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
template<class T, class V> void _print(pair<T,V> p){ _print('{'); _print(p.first); _print(','); _print(p.second); _print('}'); }
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template<class T> void _print(vector<vector<T>> v) { cerr << "\n"; for (auto i : v) { cerr << "[ "; _print(i); cerr << "]\n"; } }
template<class T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "\n"; for (auto i : m) { _print(i.first); cerr << " "; _print(i.second); cerr << "\n"; } }


typedef long long ll;

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t = 1;

	while(t--){

		ll n,m;
		cin>>n>>m;

		vector<int> dp(100000,0);

		int c = 1;

		for(int i=n-1;i>=1;i--){
			dp[i] = c;
			c++;
		}

		int curr = 2*n;
		int mul = 1;
		int prev = n;

		while(curr<=m){
			dp[curr] = mul;

			for(int i=curr-1;i>=prev+1;i--){
				if(i&1){
					dp[i] = dp[i+1]+1;
				}else{
					dp[i] = min(dp[i+1],dp[i/2])+1;
				}
			}

			mul++;
			prev = curr;
			curr*=2; 
		}

		dp[curr] = mul;

		for(int i=curr-1;i>=prev+1;i--){
			if(i&1){
				dp[i] = dp[i+1]+1;
			}else{
				dp[i] = min(dp[i+1],dp[i/2])+1;
			}
		}

		debug(dp);

		cout<<dp[m];
    
	}

	return 0;
}
