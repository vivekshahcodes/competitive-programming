#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minDiff(ll i, ll a, ll b, ll n, vector<ll>& v){
	
	if(i==n){
		return abs(a-b);
	}
	
	ll x = minDiff(i+1,a+v[i],b,n,v);
	ll y = minDiff(i+1,a,b+v[i],n,v);
	
	return min(x,y);
}

int main(){
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	
	cout<<minDiff(0,0,0,n,v);
	
	return 0;
}
