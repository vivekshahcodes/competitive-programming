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

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

// need tree -> cannot be transformed
// automaton -> can be transformed by removing characters
// array -> can be transformed by swapping
// both -> will have to use both automaton and array


/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fastio();

	int t = 1;

	while(t--){
		
		string a,b;
		cin>>a>>b;

		map<char,int> ma,mb;

		for(char c:a){
			ma[c]++;
		}	

		for(char c:b){
			mb[c]++;
		}

		bool cannot = false;

		for(int i=0;i<26;i++){
			char c = char('a'+i);
			if(ma[c]<mb[c]){
				cannot = true;
				break;
			}
		}

		if(cannot){
			cout<<"need tree";
		}else if(a.length()==b.length()){
			cout<<"array";
		}else{
			int i = 0, j = 0;
			while(i<a.length() && j<b.length()){
				if(b[j]==a[i]){
					j++;
				}
				i++;
			}

			if(j==b.length()){
				cout<<"automaton";
			}else{
				cout<<"both";
			}
		}
		
	}

	return 0;
}
