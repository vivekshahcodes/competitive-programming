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

bool comp(pair<int,int> a, pair<int,int> b){
	if(a.first==b.first){
		return a.second>b.second;
	}

	return a.first<b.first;
}

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

		vector<vector<ll>> v(n+1);
		vector<ll> u(n), s(n);

		for(ll i=0;i<n;i++){
			cin>>u[i];
		}

		for(ll i=0;i<n;i++){
			cin>>s[i];
			v[u[i]].push_back(s[i]);
		}

		for(ll i=1;i<=n;i++){
			sort(v[i].begin(),v[i].end(),greater<ll>());
		}

		for(ll i=1;i<=n;i++){
			if(v[i].size()<=1) continue;
			for(ll j=1;j<v[i].size();j++){
				v[i][j] += v[i][j-1];
			}
		}

		vector<ll> ans(n+1,0);

		for(ll i=1;i<=n;i++){
			if(v[i].size()==0){
				continue;
			}
			for(ll k=1;k<=v[i].size();k++){
				ll x = v[i].size()/k;
				x *= k;
				ans[k] += v[i][x-1];
			}
		}

		for(ll i=1;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}

		cout<<endl;

	}

	return 0;
}
