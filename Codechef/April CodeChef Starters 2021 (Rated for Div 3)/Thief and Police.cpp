#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,m,x,y,a,b;

    cin>>n>>m>>x>>y>>a>>b;

    int thief = abs(x-n)+abs(y-m);

    int police = max(abs(a-n),abs(b-m));

    if(thief<=police){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
