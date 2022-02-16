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

	ll t;
	cin>>t;

	while(t--){

		ll n;
		cin>>n;

		ll l,r,cost,costL,costR,maxLen,costLen;
		cin>>l>>r>>cost;
		costL = cost;
		costR = cost;
		maxLen = r-l+1;
		costLen = cost;

		cout<<cost<<endl;

		n--;

		for(ll i=0;i<n;i++){
			ll x,y,c;
			cin>>x>>y>>c;
			
			if(x<l){
				l = x;
				costL = c;
			}else if(x==l){
				costL = min(costL,c);
			}

			if(y>r){
				r = y;
				costR = c;
			}else if(y==r){
				costR = min(costR,c);
			}
			
			if(maxLen<y-x+1){
				maxLen = y-x+1;
				costLen = c;
			}else if(maxLen==y-x+1){
				costLen = min(costLen,c);
			}

			ll ans = costL+costR;

			if(maxLen == r-l+1){
				ans = min(ans,costLen);
			}

			cout<<ans<<endl;
		}

	}

	return 0;
}
