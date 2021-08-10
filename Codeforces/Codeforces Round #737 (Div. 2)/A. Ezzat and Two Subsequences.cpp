#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a[n], s = 0, m = INT_MIN;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        m = max(m,a[i]);
    }

    long double news = (long double)s - (long double)m;

    long double x = (long double)news;
    long double y = (long double)n-(long double)(1);

    cout<<fixed<<setprecision(9)<<(x/y)+(long double)m<<endl;


  }

  return 0;

}
