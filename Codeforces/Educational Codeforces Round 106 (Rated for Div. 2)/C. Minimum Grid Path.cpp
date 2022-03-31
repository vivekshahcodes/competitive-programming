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

		vector<ll> v(n);
		for(ll i=0;i<n;i++){
			cin>>v[i];
		}

		ll ans = LLONG_MAX;
		vector<ll> odd,even;
		ll oddMin, evenMin;
		oddMin = evenMin = LLONG_MAX;
		odd.push_back(v[0]);
		ll total = v[0];
		oddMin = v[0];

		for(ll k=2;k<=n;k++){
			if(k&1){
				odd.push_back(v[k-1]);
				total += v[k-1];
				oddMin = min(oddMin,v[k-1]);
			}else{
				even.push_back(v[k-1]);
				total += v[k-1];
				evenMin = min(evenMin,v[k-1]);
			}

			ll x = total-oddMin-evenMin;
			ll tempOdd = (n-odd.size()+1)*oddMin;
			ll tempEven = (n-even.size()+1)*evenMin;

			ans = min(ans,x+tempOdd+tempEven);
		}

		cout<<ans<<endl;
	}

	return 0;
}
