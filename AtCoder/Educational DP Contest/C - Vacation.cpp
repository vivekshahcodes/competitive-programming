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

int maxPoints(int day, int activity, vector<vector<int>>& a, vector<vector<int>>& dp){

    if(day==0){

        int mp = 0;

        for(int i=0;i<3;i++){
            if(activity!=i){
                mp = max(mp,a[0][i]);
            }
        }

        return dp[day][activity] = mp;
    }

    if(dp[day][activity]!=-1){
        return dp[day][activity];
    }

    int mp = 0;

    for(int i=0;i<3;i++){
        if(activity!=i){
            mp = max(mp,a[day][i]+maxPoints(day-1,i,a,dp));
        }
    }

    return dp[day][activity] = mp;
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  fastio();

  int n;
  cin>>n;

  vector<vector<int>> a(n, vector<int> (3));

  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int> (4,-1));

  cout<<maxPoints(n-1,3,a,dp);

  return 0;
}
