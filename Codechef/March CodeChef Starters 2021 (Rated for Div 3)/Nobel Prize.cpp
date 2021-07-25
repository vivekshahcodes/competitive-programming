#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n,m;

    cin>>n>>m;

    set<ll> s;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    if(s.size()<m){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

  }

  return 0;

}
