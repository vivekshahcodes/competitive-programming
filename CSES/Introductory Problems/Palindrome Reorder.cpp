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

  string s;
  cin>>s;

  char odd = '-';
  bool flag = true;

  unordered_map<char,int> m;

  for(int i=0;i<s.length();i++){
  	m[s[i]]++;
  }

  for(auto i:m){
  	if(i.second&1){
  		if(odd=='-'){
  			odd = i.first;
  		}else{
  			flag = false;
  			break;
  		}
  	}
  }

  string first;

  for(auto i:m){
  	int x = i.second/2;
  	for(int j=0;j<x;j++){
  		first.push_back(i.first);
  	}
  }

  string second = first;
  reverse(second.begin(),second.end());

  if(odd!='-'){
  	first.push_back(odd);
  }

  if(flag){
  	cout<<first<<second;
  }else{
  	cout<<"NO SOLUTION";
  }

  return 0;
}
