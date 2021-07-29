#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;
    
    cin>>n;
    
    int a[n], mi = INT_MAX;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        mi = min(mi,a[i]);
    }

    int c = 0;

    for(int i=0;i<n;i++){
        if(a[i]==mi){
            c++;
        }
    }

    cout<<n-c<<endl;

  }

  return 0;

}
