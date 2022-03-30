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

ll lcs(ll i, ll j, ll n, ll m, string &a, string &b, vector<vector<ll>>& dp){

    if(i==n || j==m){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    if(a[i]==b[j]){
        return dp[i][j] = 1+lcs(i+1,j+1,n,m,a,b,dp);
    }

    ll first = lcs(i+1,j,n,m,a,b,dp);
    ll second = lcs(i,j+1,n,m,a,b,dp);

    return dp[i][j] = max(first,second);
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  fastio();

  string a,b;
  cin>>a>>b;

  ll n = a.length();
  ll m = b.length();

  vector<vector<ll>> dp(n, vector<ll>(m,-1));

  lcs(0,0,n,m,a,b,dp);

  string ans;

  ll i=0,j=0;

  while(i<=n-1 && j<=m-1){
    if(a[i]==b[j]){
        ans.push_back(a[i]);
        i++;
        j++;
    }else if(i<n-1 && j<m-1 && dp[i+1][j]>dp[i][j+1]){
        i++;
    }else if(i<n-1 && j<m-1 && dp[i+1][j]<=dp[i][j+1]){
        j++;
    }else if(i==n-1){
        j++;
    }else{
        i++;
    }
  }

  cout<<ans;

  return 0;
}
