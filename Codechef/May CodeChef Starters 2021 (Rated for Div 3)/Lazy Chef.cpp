#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c;

    cin>>a>>b>>c;

    cout<<min(a*b,a+c)<<endl;

  }

  return 0;

}
