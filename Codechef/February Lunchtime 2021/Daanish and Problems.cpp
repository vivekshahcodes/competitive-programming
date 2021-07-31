#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a[11];

    for(int i=1;i<=10;i++){
        cin>>a[i];
    }

    int n;

    cin>>n;

    for(int i=9;i>=1;i--){
        a[i] += a[i+1];
    }

    int ans = 0;

    for(int i=10;i>=1;i--){
        if(a[i]-n>0){
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;

  }

  return 0;

}
