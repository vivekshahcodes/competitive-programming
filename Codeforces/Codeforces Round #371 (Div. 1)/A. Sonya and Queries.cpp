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

	int t;
	cin>>t;

	map<string,int> m;

	while(t--){

		char c;
		string s;

		cin>>c>>s;

		string temp;
		for(int i=0;i<18;i++){
			temp.push_back('0');
		}

		int curr = 17;

		for(int i=s.length()-1;i>=0;i--){
			int x = s[i]-'0';
			if(x&1){
				temp[curr] = '1';
			}else{
				temp[curr] = '0';
			}
			curr--;
		}

		debug(temp);

		if(c=='+'){
			m[temp]++;
		}else if(c=='-'){
			m[temp]--;
		}else{
			cout<<m[temp]<<"\n";
		}

	}

	return 0;
}
