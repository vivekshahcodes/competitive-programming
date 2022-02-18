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

  ll n;
  cin>>n;

  ll x = (n*(n+1))/2;

  if(x&1){
  	cout<<"NO";
  }else{
  	vector<ll> a,b;
  	ll req = x/2;
  	ll curr = 0;
  	
  	for(ll i=n;i>=1;i--){
  		if(curr+i<req){
  			a.push_back(i);
  			curr += i;
  		}else if((curr+i)==req){
  			a.push_back(i);
  			curr += i;
  		}else{
  			b.push_back(i);
  		}
  	}

  	cout<<"YES"<<endl;

  	cout<<a.size()<<endl;

  	for(ll i:a){
  		cout<<i<<" ";
  	}

  	cout<<endl;

  	cout<<b.size()<<endl;

  	for(ll i:b){
  		cout<<i<<" ";
  	}

  }

  return 0;
}
