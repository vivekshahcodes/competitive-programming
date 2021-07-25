#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c,d,e;

    cin>>a>>b>>c>>d>>e;

    if(min(a/c,b/d)>=e){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
