#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int ans = ((n%10)-1)*10;

    int i = 1;

    while(n!=0){
        n/=10;
        ans+=i;
        i++;
    }

    cout<<ans<<endl;

  }

  return 0;

}
