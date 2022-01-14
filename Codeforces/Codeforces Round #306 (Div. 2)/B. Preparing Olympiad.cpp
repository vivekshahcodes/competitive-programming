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

ll ans = 0;

void f(int n, ll a[], ll l, ll r, ll x, ll total, ll mi, ll ma){

	if(n<0){
		return;
	}

	f(n-1,a,l,r,x,total,mi,ma);
	ll c = a[n];
	mi = min(mi,c);
	ma = max(ma,c);
	total += c;
	f(n-1,a,l,r,x,total,mi,ma);

	if(total>=l && total<=r && ma-mi>=x){
		ans++;
	}
}

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

		ll a[n];

		for(ll i=0;i<n;i++){
			cin>>a[i];
		}

		sort(a,a+n);

		f(n-1,a,l,r,x,0ll,INT_MAX,0ll);

		cout<<ans;
	}

	return 0;
}
