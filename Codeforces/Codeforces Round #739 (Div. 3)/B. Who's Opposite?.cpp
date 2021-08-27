#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c;

    cin>>a>>b>>c;

    int x = max(a,b)-min(a,b);
    x*=2;

    if(a>x||b>x||c>x){
        cout<<-1<<endl;
    }else{
        int ans = c+x/2;
        if(ans<=x){
            cout<<ans<<endl;
        }else{
            cout<<ans%x<<endl;
        }
    }

  }

  return 0;

}
