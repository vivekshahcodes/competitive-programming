#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[n], ans = 0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans = max(ans,a[i]);
    }

    int x = a[0];

    for(int i=0;i<n;i++){
        x&=a[i];
    }

    cout<<min(ans,x)<<endl;


  }

  return 0;

}
