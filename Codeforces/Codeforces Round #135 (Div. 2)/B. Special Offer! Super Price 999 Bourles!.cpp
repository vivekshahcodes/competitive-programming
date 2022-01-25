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

ll noOfDigits(ll n){

	ll ans = 0;

	while(n){
		n/=10;
		ans++;
	}

	return ans;
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b>0){

        if (b&1){
            res = res * a;
        }    
        a = a * a;
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

		ll n,k;
		cin>>n>>k;

		n++;
		k++;
		ll d = noOfDigits(n)-1;
		ll ans = -1;

		for(int i=d;i>=1;i--){
			ll x = binpow(10,i);
			ll curr = n-(n%x)-1;
			if(n-curr<=k){
				ans = curr;
				break;
			}
		}

		if(ans==-1){
			cout<<n-1;
		}else{
			cout<<ans;
		}

	}

	return 0;
}
