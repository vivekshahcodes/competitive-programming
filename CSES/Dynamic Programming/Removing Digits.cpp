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

vector<int> dp(1000005,-1);

int minStepsToZero(int n){
	if(n==0){
		return 0;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	set<int> s;
	int x = n;

	while(x!=0){
		if((x%10)!=0){
			s.insert(x%10);
		}
		x/=10;
	}

	int ans = INT_MAX;

	for(auto i:s){
		if(n-i>=0){
			ans = min(ans,minStepsToZero(n-i)+1);
		}
	}

	return dp[n] = ans;

}

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

		cout<<minStepsToZero(n);

	}

	return 0;
}
