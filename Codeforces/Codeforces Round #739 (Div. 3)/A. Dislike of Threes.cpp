#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(int n){

    if(n%3==0 || n%10==3){
        return false;
    }

    return true;
}

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int ans = 0, i = 1;

    while(i<=n){
        ans++;
        while(!isGood(ans)){
            ans++;
        }
        i++;
    }

    cout<<ans<<endl;

  }

  return 0;

}
