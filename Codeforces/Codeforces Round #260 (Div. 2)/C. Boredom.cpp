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

ll maxPoints(vector<pair<ll,ll>>& v, ll n, vector<ll>& dp){

	if(n<0){
		return 0;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	ll num = v[n].first;
	ll val = v[n].second;

	ll pick = val;
	if(n-1>=0 && num-v[n-1].first>1){
		pick += maxPoints(v,n-1,dp);
	}else{
		pick += maxPoints(v,n-2,dp);
	}

	ll notPick = maxPoints(v,n-1,dp);

	return dp[n] = max(pick,notPick);
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  fastio();

  ll n;
  cin>>n;

  vector<ll> a(n);
  map<ll,ll> m;
  for(ll i=0;i<n;i++){
  	cin>>a[i];
  	m[a[i]]++;
  }

  vector<pair<ll,ll>> v;

  for(auto i:m){
  	v.push_back({i.first,i.first*i.second});
  }

  ll x = v.size();

  vector<ll> dp(x,-1);

  cout<<maxPoints(v,x-1,dp);

  return 0;
}
