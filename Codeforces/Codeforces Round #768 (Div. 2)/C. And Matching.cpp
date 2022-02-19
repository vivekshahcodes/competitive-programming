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

		int n,k;
		cin>>n>>k;

		if(n-1==k){
			if(n==4){
				cout<<-1<<endl;
			}else{
				cout<<n-1<<" "<<n-2<<endl;
				cout<<n-3<<" "<<1<<endl;
				for(int i=n-4;i>=n/2;i--){
					cout<<i<<" "<<(i^k)<<endl;
				}
				cout<<0<<" "<<2<<endl;
			}
		}else{
			for(int i=0;i<n/2;i++){
				int m = (i^(n-1));
				if(i==0){
					cout<<0<<" "<<(k^(n-1))<<endl;
				}else if(i==k || m==k){
					cout<<n-1<<" "<<k<<endl;
				}else{
					cout<<i<<" "<<m<<endl;
				}
			}
		}
	}

	return 0;
}
