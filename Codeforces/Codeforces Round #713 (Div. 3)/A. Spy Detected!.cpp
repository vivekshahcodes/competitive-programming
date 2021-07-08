#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[n+1];
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n-2;i++){
        if(a[i]!=a[i+1] && a[i]!=a[i+2]){
            cout<<i<<endl;
            break;
        }else if(a[i]!=a[i+1] && a[i]==a[i+2]){
            cout<<i+1<<endl;
            break;
        }else if(a[i]!=a[i+2] && a[i]==a[i+1]){
            cout<<i+2<<endl;
            break;
        }
    }
    
  }

  return 0;

}
