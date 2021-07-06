#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,k;

    cin>>n>>k;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int b[n];
    
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+n,greater<int>());

    for(int i=0;i<k;i++){
        if(a[i]<b[i]){
            a[i] = b[i];
        }
    }       
    
    int ans = 0;

    for(int i=0;i<n;i++){
        ans += a[i];
    }

    cout<<ans<<endl;

  }

  return 0;

}
