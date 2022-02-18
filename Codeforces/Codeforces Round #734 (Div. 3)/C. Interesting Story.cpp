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

char curr;

int count(string s){
	int ans = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]==curr){
			ans++;
		}
	}
	return ans;
}

bool comp(string a, string b){
	int x = count(a);
	int y = count(b);
	int n = a.length();
	int m = b.length();

	return 2*x-n>2*y-m;
}

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
		for(int i=0;i<n;i++){
			cin>>v[i];
		}

		int ans = 0;

		for(int x=0;x<5;x++){
			curr = x+'a';
			sort(v.begin(),v.end(),comp);
			int c = 0, z = 0, rem = 0;
			debug(v);
			for(string s:v){
				int y = count(s.begin(),s.end(),curr);
				z += y;
				rem += s.length()-y;
				if(z>rem){
					c++;
				}
			}
			ans = max(ans,c);
		}

		cout<<ans<<endl;
	}

	return 0;
}
