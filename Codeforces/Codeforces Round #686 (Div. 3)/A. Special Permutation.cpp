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
        for(int i=n;i>=1;i--){
            if(i==n/2){
                cout<<i+1<<" ";
            }else if(i==n/2 + 1){
                cout<<i-1<<" ";
            }else{
                cout<<i<<" ";
            }
        }
    }else{
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
    }

    cout<<endl;

  }

   return 0;

}
