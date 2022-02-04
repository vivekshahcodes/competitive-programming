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

	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;

		vector<string> v(n);
		map<string,int> m;

		int ans = 0;

		for(int i=0;i<n;i++){
			cin>>v[i];
			m[v[i]]++;
		}

		for(int i=0;i<n;i++){
			string s = v[i];
			if(m[s]>1){
				ans++;
				for(int j=0;j<=9;j++){
					string f = s.substr(0,3);
					f.push_back(j+'0');
					if(m.count(f)==0){
						m[f]++;
						v[i] = f;
						break;
					}
				}
				m[s]--;
			}
		}

		cout<<ans<<endl;
		for(string s:v){
			cout<<s<<endl;
		}
	}

	return 0;
}
