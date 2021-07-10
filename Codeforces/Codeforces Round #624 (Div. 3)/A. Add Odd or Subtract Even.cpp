#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,k;

    cin>>n>>k;

    int diff = k-n;

    if(diff==0){
        cout<<0<<endl;
    }else if(diff<0){
        if(diff&1){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }else{
        if(diff&1){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }

  }

return 0;

}
