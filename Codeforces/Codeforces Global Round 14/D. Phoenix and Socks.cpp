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

		int n,l,r;
		cin>>n>>l>>r;

		vector<int> left(n+1,0), right(n+1,0);
		for(int i=0;i<n;i++){
			int input;
			cin>>input;
			if(i<l){
				left[input]++;
			}else{
				right[input]++;
			}
		}

		for(int i=1;i<=n;i++){
			int m = min(left[i],right[i]);
			l-=m;
			r-=m;
			left[i]-=m;
			right[i]-=m;
		}

		if(l<r){
			swap(left,right);
			swap(l,r);
		}

		int req = (l-r)/2, ans = 0;

		for(int i=1;i<=n;i++){
			if(req==0) break;

			if(left[i]>1){
				int x = left[i]/2;
				int y = min(x,req);
				left[i]-=2*y;
				l-=2*y;
				req-=y;
				ans+=y;
			}
		}

		ans += min(l,r);
		l -= min(l,r);
		ans += l;

		cout<<ans<<endl;

		debug(left);
		debug(right);
	}

	return 0;
}
