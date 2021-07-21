#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;
    
    cin>>n;

    int ans = 0;

    for(int i=1;i<=9;i++){
        int a = i;
        for(int j=1;j<=9;j++){
            if(a<=n){
                ans++;
            }
            a*=10;
            a+=i;
        }
    }

    cout<<ans<<endl;

  }

  return 0;

}
