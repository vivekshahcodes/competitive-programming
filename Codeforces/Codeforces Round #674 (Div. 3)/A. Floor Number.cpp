#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,k;

    cin>>n>>k;

    int ans = 1, curr=2;

    while(n>curr){
        ans++;
        curr+=k;
    }

    cout<<ans<<endl;

  }

return 0;

}
