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

		int z,o;
		cin>>z>>o;

		int m = min(z,o);
		string s;

		for(int i=0;i<m;i++){
			s.push_back('1');
			s.push_back('0');
		}

		z -= m;
		o -= m;

		if(z){
			if(z==1){
				cout<<'0';
				cout<<s;
			}else{
				cout<<-1;
			}
		}else if(o){
			s.push_back('1');
			o--;
			if(o>m+1){
				cout<<-1;
			}else{
				string ans;
				for(int i=0;i<s.length();i++){
					if(o>0 && s[i]=='1'){
						ans.push_back('1');
						ans.push_back('1');
						o--;
					}else{
						ans.push_back(s[i]);
					}
				}

				cout<<ans;
				
			}
		}else{
			cout<<s;
		}

	}

	return 0;
}
