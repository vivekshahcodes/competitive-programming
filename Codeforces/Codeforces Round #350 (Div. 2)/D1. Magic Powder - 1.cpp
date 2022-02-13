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

bool isGood(ll m, vector<ll>& a, vector<ll>& b, ll k){

      for(ll i=0;i<a.size();i++){
            ll x = a[i];
            ll y = b[i];

            ll curr = y/x;
            ll rem = y%x;

            if(curr>=m){
                  continue;
            }

            ll req = m-curr;

            if((k+rem)/x>=req){
                  k-= req*x-rem;
            }else{
                  return false;
            }
            
      }

      return true;
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

          ll n,k; 
          cin>>n>>k;

          vector<ll> a(n),b(n);

          for(ll i=0;i<n;i++){
            cin>>a[i];
          } 

          for(ll i=0;i<n;i++){
            cin>>b[i];
          }

          ll l = 0, r = 1e18;

          while(l+1<r){
            ll m = l + (r-l)/2;
            if(isGood(m,a,b,k)){
                  l = m;
            }else{
                  r = m;
            }
          }

          cout<<l;
      }

      return 0;
}
