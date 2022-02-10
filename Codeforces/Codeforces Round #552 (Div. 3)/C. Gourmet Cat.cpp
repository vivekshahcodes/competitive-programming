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

	int t=1;

	map<ll,ll> m;

	while(t--){

		ll a,b,c;
		cin>>a>>b>>c;

		ll weeks = min(a/3,min(b/2,c/2));
		ll ans = 3*weeks+2*weeks+2*weeks;
		a -= 3*weeks;
		b -= 2*weeks;
		c -= 2*weeks;

		ll best = 0;

		for(ll i=1;i<=7;i++){
			ll curr = 0;
			m[1] = a;
			m[2] = b;
			m[3] = c;
			for(ll j=i;j<=i+7;j++){
				ll x;
				if(j%7==0 || j%7==1 || j%7==4){
					if(m[1]==0){
						break;
					}
					m[1]--;
					curr++;
				}else if(j%7==2 || j%7==6){
					if(m[2]==0){
						break;
					}
					m[2]--;
					curr++;
				}else{
					if(m[3]==0){
						break;
					}
					m[3]--;
					curr++;
				}
			}
			best = max(curr,best);
		}

		cout<<ans+best;
	}

	return 0;
}
