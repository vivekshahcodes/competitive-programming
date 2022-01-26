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

void pwd(vector<string> v){

	int n = v.size();
	cout<<"/";
	for(int i=0;i<n;i++){
		cout<<v[i]<<"/";
	}

	cout<<endl;
}

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

		int n;
		cin>>n;

		vector<string> curr;

		for(int it=0;it<n;it++){
			string s;
			cin>>s;

			if(s=="cd"){
				string x;
				cin>>x;

				int i = 0;
				string currStr;
				while(i<x.length()){
					if(x[i]=='/'){
						if(currStr==".."){
							curr.pop_back();
						}else if(currStr.length()>0){
							curr.push_back(currStr);
						}else{
							if(curr.size()>0){
								curr.clear();
							}
						}
						currStr.erase();	
					}else{
						currStr.push_back(x[i]);
					}
					i++;
				}
				if(currStr==".."){
					curr.pop_back();
				}else{
					curr.push_back(currStr);
				}
			}else{
				pwd(curr);
			}
		}
	}

	return 0;
}
