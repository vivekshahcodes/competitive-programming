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

	int t;
	cin>>t;

	while(t--){

		ll n;
		cin>>n;

		vector<ll> v;
		map<ll,ll> m;
		for(ll i=0;i<n;i++){
			ll input;
			cin>>input;
			m[input]++;
		}

		for(auto i:m){
			v.push_back(i.second);
		}

		n = v.size();

		sort(v.begin(),v.end());

		set<ll> s;
		for(ll i:v){
			s.insert(i);
		}

		vector<ll> suff(n);
		suff[0] = v[0];

		for(ll i=1;i<n;i++){
			suff[i] += suff[i-1]+v[i];
		}

		debug(v);

		ll ans = LLONG_MAX;

		for(ll i:s){
			ll ind = lower_bound(v.begin(),v.end(),i)-v.begin();
			ll first = 0;
			if(ind-1>=0){
				first = suff[ind-1];
			}
			ind = upper_bound(v.begin(),v.end(),i)-v.begin();
			ll second = 0;
			if(ind<n){
				second = suff[v.size()-1]-suff[ind-1]-((n-ind)*i);
			}

			ans = min(ans,first+second);
		}

		cout<<ans<<endl;

	}

	return 0;
}
