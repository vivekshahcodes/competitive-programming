#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int u,v,a,s;

    cin>>u>>v>>a>>s;

    int d = u*u - (2*a*s);

    if(d<=v*v){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

  }

  return 0;

}
