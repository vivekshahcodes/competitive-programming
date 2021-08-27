#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int ans = 1, c = 1;

    while(c<n){
        ans++;
        while(ans%3==0 || ans%10==3){
            ans++;
        }
        c++;
    }

    cout<<ans<<endl;

  }

  return 0;

}
