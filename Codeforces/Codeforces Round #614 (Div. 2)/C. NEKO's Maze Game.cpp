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

		int n,q;
		cin>>n>>q;

		vector<vector<int>> v(2,vector<int>(n,0));

		int bad = 0;

		while(q--){

			int a,b;
			cin>>a>>b;
			a--;
			b--;

			v[a][b] = 1 - v[a][b];

			for(int i=-1;i<=1;i++){
				if(b+i<0 || b+i>=n){
					continue;
				}
				if(v[1-a][b+i] == 1){
					if(v[a][b]){
						bad++;
					}else{
						bad--;
					}
				}
			}

			if(bad==0){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}

			debug(v);
		}

	}

	return 0;
}
