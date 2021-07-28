#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c,d,e,f,g;

    cin>>a>>b>>c>>d>>e>>f>>g;

    if(e>=a && f>=b && g>=c && e+f+g>=d){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
