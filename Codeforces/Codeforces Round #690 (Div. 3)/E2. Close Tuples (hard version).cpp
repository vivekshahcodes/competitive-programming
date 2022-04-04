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

ll binpow(ll a, ll b, ll m) {
    ll res = 1;
    while (b>0){

        if (b&1){
            res = (res * a)%m;
        }    
        a = (a * a)%m;
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

	int t;
	cin>>t;

	ll mod = 1e9+7;

	vector<ll> fact(2e5+1,1), invFact(2e5+1,1);
	for(ll i=1;i<=2e5;i++){
		fact[i] = (i*fact[i-1])%mod;
		invFact[i] = binpow(fact[i],mod-2,mod);
	}

	while(t--){

		ll n,m,k;
		cin>>n>>m>>k;

		vector<ll> v(n);
		for(ll i=0;i<n;i++){
			cin>>v[i];
		}

		sort(v.begin(),v.end());

		ll i=0,j=0,ans=0;

		while(i<n-m+1){

			while(j<n && v[j]-v[i]<=k){
				j++;
			}

			j--;

			ll d = j-i;

			if(d<m-1){
				i++;
				continue;
			}

			ans = (ans+((fact[d]*invFact[m-1])%mod*(invFact[d-m+1])%mod)%mod)%mod;

			i++;
		}

		cout<<ans<<endl;

		debug(v);
	}

	return 0;
}
