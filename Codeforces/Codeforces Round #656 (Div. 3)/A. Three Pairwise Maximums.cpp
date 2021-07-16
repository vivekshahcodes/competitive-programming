#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a[3];

    for(int i=0;i<3;i++){
        cin>>a[i];
    }

    sort(a,a+3);

    if(a[1]==a[2]){
        cout<<"YES"<<endl;
        cout<<a[1]<<" "<<a[0]<<" "<<a[0]<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

return 0;

}
