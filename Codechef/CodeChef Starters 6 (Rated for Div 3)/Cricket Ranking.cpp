#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e>>f;

    int x = 0, y = 0;

    if(a>d){
        x++;
    }else{
        y++;
    }

    if(b>e){
        x++;
    }else{
        y++;
    }

    if(c>f){
        x++;
    }else{
        y++;
    }

    if(x>y){
        cout<<"A"<<endl;
    }else{
        cout<<"B"<<endl;
    }


  }

  return 0;

}
