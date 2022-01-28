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

ll binpow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b>0){

        if (b&1){
            res = (res * a)%mod;
        }    
        a = (a * a)%mod;
        b >>= 1;
    }
    return res;
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t=1;

	while(t--){

		ll n,m,mod=1e9+7;
		cin>>n>>m;

		vector<ll> a(n), b(m);

		for(ll i=0;i<n;i++){
			cin>>a[i];
		}

		for(ll i=0;i<m;i++){
			cin>>b[i];
		}

		vector<vector<ll>> v(n,vector<ll> (m,0));

		for(ll i=0;i<n;i++){
			for(ll j=0;j<a[i];j++){
				v[i][j] = 1;
			}
		}

		for(ll j=0;j<m;j++){
			for(ll i=0;i<b[j];i++){
				v[i][j] = 1;
			}
		}

		ll ans = 0;
		bool flag = true;

		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(v[i][j]){
					if(j==a[i] || i==b[j]){
						flag = false;
						break;
					}
				}else{
					if(j>a[i] && i>b[j]){
						ans++;
					}
				}
			}
			if(!flag){
				break;
			}
		}

		debug(v);

		if(flag){
			cout<<binpow(2,ans,mod);
		}else{
			cout<<0;
		}

	}

	return 0;
}
