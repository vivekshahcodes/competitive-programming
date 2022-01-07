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
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template<class T> void _print(vector<vector<T>> v) { cerr << "\n"; for (auto i : v) { cerr << "[ "; for (T j : i) { cerr << j << " "; } cerr << "]\n"; } }
template<class T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "\n"; for (auto i : m) { _print(i.first); cerr << " "; _print(i.second); cerr << "\n"; } }

typedef long long ll;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t = 1;

	while(t--){

		int n;
		cin>>n;

		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		vector<vector<int>> dp(n+1,vector<int>(3,0));

		for(int i=1;i<=n;i++){
			int ind =  i-1;

			int x = dp[i-1][0];
			int y = dp[i-1][1];
			int z = dp[i-1][2];

			dp[i][0] = max(x,max(y,z));

			if(a[ind]==3){
				dp[i][1] += max(x,z)+1;
				dp[i][2] += max(x,y)+1;
			}else if(a[ind]==1){
				dp[i][1] += max(x,z)+1;
			}else if(a[ind]==2){
				dp[i][2] += max(x,y)+1;
			}

		}	

		debug(dp);

		cout<<n-max(dp[n][0],max(dp[n][1],dp[n][2]));

	}

	return 0;
}
