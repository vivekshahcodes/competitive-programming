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

		string s;
		cin>>s;

		set<int> zero, one;

		if(s[0]=='0'){
			zero.insert(1);
		}else{
			one.insert(1);
		}

		vector<int> v;
		v.push_back(1);
		int curr = 1;

		for(int i=1;i<n;i++){
			int x = s[i]-'0';

			if(x==0){
				if(one.size()>0){
					int ele = *one.begin();
					one.erase(ele);
					zero.insert(ele);
					v.push_back(ele);
				}else{
					curr++;
					zero.insert(curr);
					v.push_back(curr);
				}
			}else{
				if(zero.size()>0){
					int ele = *zero.begin();
					zero.erase(ele);
					one.insert(ele);
					v.push_back(ele);
				}else{
					curr++;
					one.insert(curr);
					v.push_back(curr);
				}
			}
		}

		cout<<curr<<endl;

		for(int i:v){
			cout<<i<<" ";
		}

		cout<<endl;

	}

	return 0;
}
