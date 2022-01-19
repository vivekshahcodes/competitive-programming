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

		int n,m,k;
		cin>>n>>m>>k;

		priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
		vector<int> ans(n);

		for(int i=0;i<m;i++){
			p.push({0,i+1});
		}

		for(int i=0;i<n;i++){
			int input;
			cin>>input;
			int x = p.top().first;
			int y = p.top().second;
			p.pop();
			p.push({x+input,y});
			ans[i] = y;
		}

		int mi = p.top().first, ma = p.top().first;

		p.pop();

		while(p.size()){
			int x = p.top().first;
			p.pop();
			if(p.size()==0){
				ma = x;
			}
		}

		debug(ans);

		if(ma-mi<=k){
			cout<<"YES"<<endl;
			for(int i:ans){
				cout<<i<<" ";
			}
			cout<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}
