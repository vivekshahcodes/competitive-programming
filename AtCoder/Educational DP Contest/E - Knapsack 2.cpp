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

  ll n,w;
  cin>>n>>w;

  vector<ll> weight(n), value(n);
  ll total = 0;

  for(ll i=0;i<n;i++){
    cin>>weight[i]>>value[i];
    total += value[i];
  }

  vector<vector<ll>> dp(n, vector<ll> (total+1));

  for(ll val=0;val<=total;val++){
    dp[0][val] = 1e9;
  }

  dp[0][0] = 0;
  dp[0][value[0]] = weight[0];

  for(ll i=1;i<n;i++){
    for(ll v=0;v<=total;v++){

        dp[i][v] = dp[i-1][v];
        if(v<value[i]) continue;
        dp[i][v] = min(dp[i][v],dp[i-1][v-value[i]]+weight[i]);
    }
  }

  ll ans = 0;

  for(ll v=0;v<=total;v++){
    if(dp[n-1][v]<=w){
        ans = v;
    }
  }

  cout<<ans;

  return 0;
}
