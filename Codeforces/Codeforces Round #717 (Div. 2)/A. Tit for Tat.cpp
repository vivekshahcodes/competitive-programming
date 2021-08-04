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
    
    int ind = 0;

    for(int i=0;i<k;i++){
        while(a[ind]<=0 && ind<n-1){
            ind++;
        }
        if(ind==n-1){
            break;
        }
        a[ind]--;
        a[n-1]++;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

  }

  return 0;

}
