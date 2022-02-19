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

		string s;
		cin>>s;

		int n = s.length();
		int ans = n-2;

		map<char,int> m;
		int maxFreq = 0;
		for(int i=0;i<n;i++){
			m[s[i]]++;
			maxFreq = max(maxFreq,m[s[i]]);
		}

		ans = min(ans,n-maxFreq);

		for(int i=0;i<=9;i++){
			for(int j=0;j<=9;j++){
				char a = i+'0';
				char b = j+'0';
				int x = 0, y = 1;

				int curr = 0;

				while(x<n && y<n){
					if(s[x]==a && s[y]==b && x<y){
						curr++;
						x = y+1;
						y = y+2;
					}else if(s[x]==a){
						y++;
					}else if(s[y]==b){
						x++;
					}else{
						x++;
						y++;
					}
				}

				ans = min(ans,n-(2*curr));
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
