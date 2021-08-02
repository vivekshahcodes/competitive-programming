#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    if(n&1){
        cout<<3<<" "<<1<<" "<<2<<" ";
        for(int i=4;i<n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }else{
        for(int i=1;i<n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }

    cout<<endl;

  }

  return 0;

}
