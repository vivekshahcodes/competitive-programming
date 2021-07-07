#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n, ow = 0, ew = 0;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0 && a[i]%2==1){
            ew++;
        }else if(i%2==1 && a[i]%2==0){
            ow++;
        }
    }

    if(ew==ow){
        cout<<ew<<endl;
    }else{
        cout<<-1<<endl;
    }
    
  }

  return 0;

}
