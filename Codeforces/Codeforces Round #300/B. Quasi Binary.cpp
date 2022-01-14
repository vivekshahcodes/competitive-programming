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

/*
	quasibinary -> 0,1,10,11,100,101,110,111
	0 doesn't really matter
	choose nearest quasibinary which is lower than the current number.
	But see 10+10==20 but the nearest quasi of 20 is 11.
	So this is not a greedy problem hopefully.
	Let's think of dp.
	Generating quasi -> either x10 or +1. If +1 leader to unit digit 2, don't.
	Upto 10^6 quasi
	Okay it is coin change, but with weird quasi
*/ 

vector<int> quasi;

void f(int n){
	if(n%10==2 || n>1e6){
		return;
	}

	quasi.push_back(n);

	f(n*10);
	f(n+1);
}

vector<int> dp(1e6+1,0);
vector<int> quasiUsed(1e6+1,0);

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t = 1;
	f(1);

	while(t--){

		int n;
		cin>>n;
		
		sort(quasi.begin(),quasi.end());

		for(int i=1;i<=1e6;i++){
			dp[i] = INT_MAX;
			for(auto x:quasi){
				if(i-x>=0 && dp[i-x]+1<dp[i]){
					dp[i] = dp[i-x]+1;
					quasiUsed[i] = x;
				}
			}
		}

		cout<<dp[n]<<endl;

		while(n>0){
			int x = quasiUsed[n];
			cout<<x<<" ";
			n-=x;
		}

	}

	return 0;
}
