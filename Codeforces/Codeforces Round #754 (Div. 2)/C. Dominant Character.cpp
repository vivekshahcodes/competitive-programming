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

		int prev = -1, ans = INT_MAX;

		for(int i=0;i<n;i++){
			if(s[i]=='a'){
				if(prev==-1){
					prev = i;
					continue;
				}
				int x = i-prev;
				if(x==1){
					ans = 2;
					break;
				}else if(x==2){
					ans = min(ans,3);
				}else if(x==3){
					if(prev+2<n && (s[prev+1]!=s[prev+2])){
						ans = min(ans,4);
					}else{
						if(i+3<n && prev+1<n && s[i+1]!=s[prev+1] && s[i+1]==s[i+2] && s[i+3]=='a'){
							ans = min(ans,7);
						}
					}
				}

				prev = i;
			}
		}

		if(ans==INT_MAX){
			cout<<-1<<endl;
		}else{
			cout<<ans<<endl;
		}
	}

	return 0;
}
