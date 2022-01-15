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

	while(t--){

		ll n;
		cin>>n;

		vector<vector<ll>> v(n,vector<ll> (n));
		bool ans = true;

		ll x,y;

		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				cin>>v[i][j];
				if(v[i][j]==0){
					x = i;
					y = j;
				}
			}
		}

		if(n==1){
			cout<<1;
			return 0;
		}

		ll rowSum = 0;
		ll currSum = 0;

		for(ll i=0;i<n;i++){
			if(i==x) continue;

			for(ll j=0;j<n;j++){
				rowSum +=v[i][j];
				currSum += v[x][j];
			}

			break;
		}

		ll e = rowSum - currSum;

		v[x][y] = e;

		for(ll i=0;i<n;i++){
			ll curr = 0;
			for(ll j=0;j<n;j++){
				curr += v[i][j];
			}
			if(curr!=rowSum){
				ans = false;
				break;
			}
		}

		for(ll j=0;j<n;j++){
			ll curr = 0;
			for(ll i=0;i<n;i++){
				curr += v[i][j];
			}
			if(curr!=rowSum){
				ans = false;
				break;
			}
		}

		ll curr = 0;

		for(ll i=0;i<n;i++){
			curr+=v[i][i];
		}

		if(curr!=rowSum){
			ans = false;
		}

		curr = 0;
		ll i = 0, j = n-1;

		while(i<n){
			curr += v[i][j];
			i++;
			j--;
		}

		if(curr!= rowSum){
			ans = false;
		}

		if(ans && e>0){
			cout<<e;
		}else{
			cout<<-1;
		}


	}

	return 0;
}
