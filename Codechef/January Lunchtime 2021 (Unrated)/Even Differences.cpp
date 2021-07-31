#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n, o = 0;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            o++;
        }
    }

    cout<<min(o,n-o)<<endl; 

  }

  return 0;

}
