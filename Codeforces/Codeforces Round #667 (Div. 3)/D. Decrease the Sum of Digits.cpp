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
		int k;
		cin>>s>>k;

		int n = s.length();

		int sumOfDigits = 0;
		for(int i=0;i<n;i++){
			sumOfDigits += s[i]-'0';
		}

		if(sumOfDigits<=k){
			cout<<0<<endl;
		}else{
			int total=0, i=0;

			while(i<n && total+(s[i]-'0')<k){
				total += s[i]-'0';
				i++;
			}

			string ans;
			for(;i<n;i++){
				int curr = s[i]-'0';
				curr = 9-curr;
				ans.push_back(curr+'0');
			}

			i = ans.length()-1;

			while(i>=0){
				int curr = ans[i]-'0';
				if(curr==9){
					ans[i]='0';
				}else{
					curr++;
					ans[i] = curr+'0';
					break;
				}
				i--;
			}

			i = 0;
			while(i<ans.length() && ans[i]=='0'){
				i++;
			}

			string finalAns;

			while(i<ans.length()){
				finalAns.push_back(ans[i]);
				i++;
			}

			cout<<finalAns<<endl;
		}
	}

	return 0;
}
