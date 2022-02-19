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

ll prod(vector<ll>& v){
	ll ans = 1;
	for(ll i=0;i<10;i++){
		ans *= v[i];
	}
	return ans;
}

bool isGood(ll m, ll k){
	ll curr = 1;
	for(ll i=0;i<10;i++){
		curr *= m;
	}
	if(curr<=k) return true;
	return false;
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  fastio();

  ll k;
  cin>>k;

  ll l = 1, r = 50;

  while(l+1<r){
  	ll m = l + (r-l)/2;
  	if(isGood(m,k)){
  		l = m;
  	}else{
  		r = m;
  	}
  }

  vector<ll> v(10,l);

  ll i=0;

  while(prod(v)<k){
  	v[i]++;
  	i++;
  	if(i==10){
  		i==0;
  	}
  }

  string s = "codeforces";

  for(ll i=0;i<10;i++){
  	for(ll j=0;j<v[i];j++){
  		cout<<s[i];
  	}
  }

  return 0;
}
