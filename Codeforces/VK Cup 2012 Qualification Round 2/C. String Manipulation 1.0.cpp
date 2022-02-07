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

		int k;
		cin>>k;

		string s;
		cin>>s;

		string c = s;

		vector<vector<int>> v(26);

		for(int i=1;i<k;i++){
			s+=c;
		}

		for(int i=0;i<s.length();i++){
			int x = s[i]-'a';
			v[x].push_back(i);
		}

		int n;
		cin>>n;

		for(int i=0;i<n;i++){
			int a;
			char b;
			cin>>a>>b;
			int x = b-'a';
			v[x].erase(v[x].begin()+a-1);
		}

		debug(v);

		string temp = s;

		for(int i=0;i<s.length();i++){
			temp[i] = '-';
		}

		for(int i=0;i<26;i++){
			if(v[i].size()>0){
				for(int x:v[i]){
					temp[x] = s[x];
				}
			}
		}

		for(int i=0;i<temp.length();i++){
			if(temp[i]!='-'){
				cout<<temp[i];
			}
		}

	}

	return 0;
}
