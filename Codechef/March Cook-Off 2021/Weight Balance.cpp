#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c,d,e;

    cin>>a>>b>>c>>d>>e;

    int diff = b-a;

    if(diff>=c*e && diff<=d*e){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }


  }

  return 0;

}
