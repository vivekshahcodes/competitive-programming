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

	int t=1;

	while(t--){

		int a,b;
		cin>>a>>b;

		if(a==1 && b==1){
			cout<<0;
			continue;
		}

		vector<vector<int>> v(a,vector<int> (b));

		int m = 2;

		for(int i=0;i<b;i++){
			v[0][i] = m;
			m++;
		}

		int x = b+2;

		for(int i=1;i<a;i++){
			for(int j=0;j<b;j++){
				v[i][j] = x*v[0][j];
			}
			x++;
		}

		if(b==1){
			x = 2;
			for(int i=0;i<a;i++){
				v[i][0] = x;
				x++;
			}
		}

		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}

	}

	return 0;
}
