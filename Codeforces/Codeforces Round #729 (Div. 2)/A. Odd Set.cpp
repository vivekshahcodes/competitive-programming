#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int o=0,e=0;

    for(int i=0;i<2*n;i++){
        int input;
        cin>>input;
        if(input&1){
            o++;
        }else{
            e++;
        }
    }

    if(o==e){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


  }

  return 0;

}
