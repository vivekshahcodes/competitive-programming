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

		string s;
		cin>>s;

		vector<ll> sheeps;

		for(ll i=0;i<n;i++){
			if(s[i]=='*'){
				sheeps.push_back(i);
			}
		}

		if(sheeps.size()<=1 || sheeps.size()==n){
			cout<<0<<endl;
		}else{
			ll mid = sheeps.size()/2;
			ll x = sheeps[mid];
			ll ans = 0;
			ll curr = x;

			for(ll i=mid;i<sheeps.size();i++){
				ans += abs(sheeps[i]-curr);
				curr++;
			}

			curr = x;

			for(ll i=mid;i>=0;i--){
				ans += abs(sheeps[i]-curr);
				curr--;
			}

			cout<<ans<<endl;
		}
	}

	return 0;
}
