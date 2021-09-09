#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  vector<int> v(1000000,0);

  for(int i=1;i<1000000;i++){
      v[i] = i ^ v[i-1];
  }

  while(t--){

    int a,b;

    cin>>a>>b;

    int x = v[a-1];

    if(x==b){
        cout<<a<<endl;
    }else if((x^b)!=a){
        cout<<a+1<<endl;
    }else{
        cout<<a+2<<endl;
    }

  }

  return 0;

}
