#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c,d,e;

    cin>>a>>b>>c>>d>>e;

    int dist = a*b;

    if(dist<10){
        cout<<0<<endl;
    }else if(dist<21){
        cout<<c<<endl;
    }else if(dist<42){
        cout<<d<<endl;
    }else{
        cout<<e<<endl;
    }

  }

  return 0;

}
