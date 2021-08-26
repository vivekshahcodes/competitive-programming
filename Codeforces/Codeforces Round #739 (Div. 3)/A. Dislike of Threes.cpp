#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_good(int n){
  
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

    int ans = 0, c = 0;

    while(c<n){
        ans++;
        while(!is_good(ans)){
            ans++;
        }
        c++;
    }

    cout<<ans<<endl;

  }

  return 0;

}
