#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b;

    cin>>a>>b;

    cout<<max(max(a,b),2*min(a,b))*max(max(a,b),2*min(a,b))<<endl;

  }

  return 0;

}
