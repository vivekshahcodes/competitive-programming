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

int minCost(vector<int> &a, int n, int k, vector<int>& dp){

    if(n==0){
        return 0;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    int ans = INT_MAX;

    for(int i=1;i<=k;i++){
        if(n-i>=0){
            ans = min(ans,minCost(a,n-i,k,dp)+abs(a[n-i]-a[n]));
        }
    }

    return dp[n] = ans;
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  fastio();

  int n,k;
  cin>>n>>k;

  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  vector<int> dp(n,-1);

  cout<<minCost(a,n-1,k,dp);

  return 0;
}