#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int i;

    for(i=31;i>=0;i--){
        if(n&1<<i){
            break;
        }
    }

    cout<<(1<<i)-1<<endl;

  }

  return 0;

}
