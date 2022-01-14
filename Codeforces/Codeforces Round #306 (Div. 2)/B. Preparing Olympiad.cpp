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

		ll n,l,r,x;
		cin>>n>>l>>r>>x;

		vector<ll> a(n);
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}

		ll ans = 0;

		for(ll i=1;i<(1ll<<n);i++){

			ll total = 0;

			if(__builtin_popcountll(i)<2){
				continue;
			}

			ll ind = 0;
			ll curr = i;
			ll mi = INT_MAX;
			ll ma = 0;

			while(curr){
				if(curr&1){
					mi = min(mi,a[ind]);
					ma = max(ma,a[ind]);
					total += a[ind];
				}
				ind++;
				curr>>=1;
			}

			if(total>=l && total<=r && ma-mi>=x){
				ans++;
			}
		}

		cout<<ans;
	}

	return 0;
}
