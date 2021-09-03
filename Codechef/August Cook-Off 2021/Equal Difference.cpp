#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[n];

    map<int,int> m;

    int ma = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        ma = max(ma,m[a[i]]);
    }

    if(n<=2){
        cout<<0<<endl;
    }else{
        cout<<min(n-2,n-ma)<<endl;
    }

  }

  return 0;

}
