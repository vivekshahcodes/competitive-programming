#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b,c,ans=0;

    cin>>a>>b>>c;

    bool flag = true;

    if(a>=b){
        while(a<=c && b<=c){
            if(flag){
                b+=a;
                flag = false;
            }else{
                a+=b;
                flag = true;
            }
            ans++;
        }
    }else{

        while(a<=c && b<=c){
            if(flag){
                a+=b;
                flag = false;
            }else{
                b+=a;
                flag = true;
            }
            ans++;
        }
    }

    cout<<ans<<endl;

  }

  return 0;

}
