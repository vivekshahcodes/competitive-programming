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

		vector<int> v(n);
		int o = 0, z = 0;

		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v[i] = s.length();
			for(char c:s){
				if(c=='0'){
					z++;
				}else{
					o++;
				}
			}
		}

		sort(v.begin(),v.end());

		priority_queue<int> p;
		p.push(o);
		p.push(z);

		int ans = 0;

		for(int i=0;i<n;i++){
			if(v[i]%2==0){
				bool flag = true;
				for(int j=0;j<v[i]/2;j++){
					int x = p.top();
					p.pop();
					if(x>=2){
						x-=2;
						p.push(x);
					}else{
						flag = false;
						break;
					}
				}

				if(flag){
					ans++;
				}
			}else{
				ans++;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
