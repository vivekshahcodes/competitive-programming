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

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	ll t = 1;

	while(t--){

		ll n,m,k;
		cin>>n>>m>>k;

		vector<ll> v(m);
		for(ll i=0;i<m;i++){
			cin>>v[i];
		}

		ll mul = k, used = 0, ans = 0;
		ll i = 0, j = 0;

		while(j<m){
			ll x = (v[i]-used+k-1)/k;
			debug(x);
			ll curr = used;
			while(j<m && (v[j]-used+k-1)/k==x){
				debug(j);
				curr++;
				j++;
			}
			used = curr;
			ans++;
			i = j;
		}

		cout<<ans;

	}

	return 0;
}
